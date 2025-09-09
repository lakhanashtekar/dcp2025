#include <iostream>
using namespace std;

int main() {
    int V = 5; 
    int E = 5; 

    
    int adj[10][10] = {0};

    
    bool visited[10] = {false};

    
    int edges[5][2] = {
        {0,1}, {1,2}, {2,3}, {3,4}, {4,0}
    };

    for (int i = 0; i < E; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    bool cycle = false;

    
    for (int start = 0; start < V; start++)
    {
        if (!visited[start])
        {
            int stack[100], parent[100];
            int top = -1;

            stack[++top] = start;
            parent[start] = -1;
            visited[start] = true;

            while (top >= 0)
            {
                int node = stack[top--];

                for (int i = 0; i < V; i++)
                {
                    if (adj[node][i] == 1)
                    {
                        if (!visited[i])
                        {
                            visited[i] = true;
                            stack[++top] = i;
                            parent[i] = node;
                        }
                        else if (parent[node] != i)
                        {
                            cycle = true; 
                        }
                    }
                }
            }
        }
    }

    if (cycle)
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
