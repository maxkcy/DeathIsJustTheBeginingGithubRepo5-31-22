using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using UnityEngine.Tilemaps;

public class EtredalsAi : MonoBehaviour
{
    [Header("Pathfinding")]
    public Transform target;
    public float activateDistance = 50f;
    public float pathUpdateSeconds = 0.5f;

    [Header("Physics")]
    public float Force = 200f;
    public float nextWaypointDistance = 2f;
    public float jumpNodeHeightRequirement = 0.8f;
    public float jumpModifier = 1f;
    public float jumpCheckOffset = 0.1f;

    [Header("Custom Behavior")]
    public bool followEnabled = true;
    public bool jumpEnabled = true;
    public bool directionLookEnabled = true;

    [Header("Specific")]

    private Path path;
    private int currentWaypoint = 0;
    RaycastHit2D isGrounded;
    Seeker seeker;
    Rigidbody2D rb;
    Transform _torsoBone;

    RoboCtrl[] robos;
    Vector2 nudgePos;

    public void Start() {
        seeker = GetComponent<Seeker>();
        rb = GetComponent<Rigidbody2D>();
        _torsoBone = transform.Find("Bones/Root Bone/Torso Bone");

        InvokeRepeating("UpdatePath", 0f, pathUpdateSeconds);
        InvokeRepeating("Nudge", 3f, 10f);
    }

    private void Update() {
        if (target != null)
        {
            Flip();
            RotateTorso();
        } else { SetTarget(); }
    }

    private void FixedUpdate() {
        if (target != null)
        {
            if (TargetInDistance() && followEnabled)
            {
                PathFollow();
            }
        } else { SetTarget(); }
    }

    private void UpdatePath() {
        if (target != null)
        {
            if (followEnabled && TargetInDistance() && seeker.IsDone())
            {
                seeker.StartPath(rb.position, target.position, OnPathComplete);
            }
        } else { SetTarget(); }
    }

    private void PathFollow() {
        if (path == null)
        {
            return;
        }

        // Reached end of path
        if (currentWaypoint >= path.vectorPath.Count)
        {
            return;
        }

        // See if colliding with anything
        Vector3 startOffset = transform.position - new Vector3(0f, GetComponent<Collider2D>().bounds.extents.y + jumpCheckOffset);
        isGrounded = Physics2D.Raycast(startOffset, -Vector3.up, 0.05f,~(LayerMask.GetMask("Friendly", "Ignore Raycast")));

        // Direction Calculation
        Vector2 direction = ((Vector2)path.vectorPath[currentWaypoint] - rb.position).normalized;
        Vector2 force = direction * Force * Time.deltaTime;

        // Jump
        if (jumpEnabled && isGrounded)
        {
            if (direction.y > jumpNodeHeightRequirement)
            {
                
                rb.AddForce(Vector2.up * Force * jumpModifier);
            }
        }

        // Movement
        rb.AddForce(force);
        
        

        // Next Waypoint
        float distance = Vector2.Distance(rb.position, path.vectorPath[currentWaypoint]);
        if (distance < nextWaypointDistance)
        {
            currentWaypoint++;
            // My ladder
            bool onLadder = Physics2D.Raycast(startOffset, -Vector3.up, 0.05f, (LayerMask.GetMask("Ladder")));
            if (onLadder)
            {
                RaycastHit2D hit = Physics2D.Raycast((Vector2)path.vectorPath[currentWaypoint], new Vector2(0, 1), 2f, LayerMask.GetMask("Ladder"));
                if (hit)
                {
                    if (Mathf.Abs(rb.velocity.x) > .1f)
                    {
                        rb.velocity = new Vector2(Mathf.Sign(rb.velocity.x) * .1f, rb.velocity.y);
                    }
                }
            }
        }

        // Direction Graphics Handling
        if (directionLookEnabled)
        {
            if (rb.velocity.x > 0.05f)
            {
                transform.localScale = new Vector3(-1f * Mathf.Abs(transform.localScale.x), transform.localScale.y, transform.localScale.z);
            }
            else if (rb.velocity.x < -0.05f)
            {
                transform.localScale = new Vector3(Mathf.Abs(transform.localScale.x), transform.localScale.y, transform.localScale.z);
            }
        }
    }

    private bool TargetInDistance() {
        return Vector2.Distance(transform.position, target.transform.position) < activateDistance;
    }

    private void OnPathComplete(Path p) {
        if (!p.error)
        {
            path = p;
            currentWaypoint = 0;
        }
    }

    private void Flip() {
        if (Vector2.Distance(transform.position, target.transform.position) < 10f)
        {
            if (target.position.x > transform.position.x)
            {
                transform.localScale = new Vector2(1, 1);
            }
            else
            {
                transform.localScale = new Vector2(-1, 1);
            }
        } 
        else
        {
            if (rb.velocity.x < -Mathf.Epsilon)
            {
                {
                    transform.localScale = new Vector2(-1, 1);
                }
            }
            else if (rb.velocity.x > Mathf.Epsilon)
            {
                {
                    transform.localScale = new Vector2(1, 1);
                }
            }
        }

    }

    private void RotateTorso() {
        Vector2 dir = ((Vector2)target.position - (Vector2)_torsoBone.position).normalized;
        if (Vector2.Distance(transform.position, target.transform.position) > 20) {
            _torsoBone.rotation = new Quaternion(0, 0, 0, 0);
            return;
        } 
        float deltaZAngle = Quaternion.FromToRotation(-_torsoBone.up, dir).eulerAngles.z;
        deltaZAngle *= _torsoBone.lossyScale.x;
        _torsoBone.Rotate(0, 0, deltaZAngle);
    }

    private void SetTarget() {
        robos = FindObjectsOfType<RoboCtrl>();
        if (robos.Length > 0)
        {
            target = robos[Random.Range(0, robos.Length - 1)].transform;
        }
    }


    public void Nudge() 
    {
        if (nudgePos != null)
        {
            if (Vector2.Distance(nudgePos, transform.position) < 2)
            { 
                Vector2 dir = target.position - transform.position;
                transform.position = (Vector2)transform.position + dir.normalized;
            }
        }
        nudgePos = transform.position;
    }

}

