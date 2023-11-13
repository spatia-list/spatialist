using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Http;
using System.Threading.Tasks;
using System.Text.Json;
using Debug = UnityEngine.Debug;

public class NetworkManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(GetPostIts());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public async Task<string> GetPostItsAsync()
    {
        using (HttpClient client = new HttpClient())
        {
            HttpResponseMessage response = await client.GetAsync("http://0.0.0.0:8000/postits");
            response.EnsureSuccessStatusCode();
            string responseBody = await response.Content.ReadAsStringAsync();
            return responseBody;
        }
    }

    private IEnumerator GetPostIts()
    {
        Task<string> getPostItsTask = GetPostItsAsync();
        yield return new WaitUntil(() => getPostItsTask.IsCompleted);
        string postItJson = getPostItsTask.Result;

        // Rest of your code...

        Debug.Log(postItJson);
    }
}
