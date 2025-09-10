#include <iostream>
using namespace std;

int main()
{
    int V = 5; 
    int E = 5; 
    
    int adj[10][10] = {0};

    int edges[5][2] = {
        {0,1}, {0,2}, {1,3}, {2,3}, {3,4}
    };

    
    for (int i = 0; i < E; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u][v] = 1;
        adj[v][u] = 1; 
    }

    int start = 0, end = 4;

    bool visited[10] = {false};
    int dist[10];
    for (int i = 0; i < V; i++) 
    {
    dist[i] = -1;
    }
 
    int q[100];
    int front = 0, rear = 0;

   
    visited[start] = true;
    dist[start] = 0;
    q[rear++] = start;

    
    while (front < rear) 
    {
        int node = q[front++];
        for (int i = 0; i < V; i++)
        {
            if (adj[node][i] == 1 && !visited[i])
            {
                visited[i] = true;
                dist[i] = dist[node] + 1;
                q[rear++] = i;
            }
        }
    }

    cout << dist[end] << endl;

    return 0;
}
