using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class ButtonSCript : MonoBehaviour
{
    public void OnStartClicked() {
        SceneManager.LoadScene("Level1");
    }

    public void OnTryAgainClicked() {
        SceneManager.LoadScene("Level1");
    }

    public void OnMenuClicked() {
        SceneManager.LoadScene("Menu");
    }
}
