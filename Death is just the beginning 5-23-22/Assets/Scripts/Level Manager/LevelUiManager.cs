using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class LevelUiManager : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI HealthText;
    [SerializeField] Health PlayerHealth;
    [SerializeField] GameObject RemainingPanel;
    [SerializeField] TextMeshProUGUI RmFndText;
    [SerializeField] TextMeshProUGUI RmRoboText;

    [SerializeField] GameObject EndOfGameCanvas;
    [SerializeField] public TextMeshProUGUI EndOfGameMessage;
    public string Message;
    LevelManager levelManager;
    void Start()
    {
        HealthText.enabled = true;
        levelManager = FindObjectOfType<LevelManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (HealthText.enabled)
        {
            HealthText.text = "Health: " + PlayerHealth.health;
        }
        if (PlayerHealth.health <= 0)
        {
            HealthText.enabled = false;
            Invoke("ActivateRemainingPanel", 5);
        }
        if (RemainingPanel.activeSelf)
        {
            RmFndText.text = "Friendlies: " + levelManager.Friendlies.Count;
            RmRoboText.text = "Robots: " + levelManager.Enemies.Count;
        }
    }

    void ActivateRemainingPanel() {
        RemainingPanel.SetActive(true);
    }

    public void ActiveEndOfGameCanvas() {
        EndOfGameMessage.text = Message;
        EndOfGameCanvas.SetActive(true);
    }
}
