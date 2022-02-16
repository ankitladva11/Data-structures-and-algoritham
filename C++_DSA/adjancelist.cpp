#include <iostream>
#include <vector>
#include <queue>

using namespace std;
void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
void BFS(vector<int> v[], int vv, int s)
{
    bool visited[vv + 1];
    for (int i = 0; i < vv; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (q.empty() == false)
    {
        int j = q.front();
        q.pop();
        cout << j << " ";

        for (int x : v[j])
        {
            if (visited[j] == false)
            {
                visited[j] = true;
                q.push(j);
            }
        }
    }
}
int main()
{
    int v = 4;
    vector<int> adj[4];
    addedge(adj, 0, 1);
    addedge(adj, 0, 3);
    addedge(adj, 1, 2);
    addedge(adj, 1, 3);
    BFS(adj,v,0);

    return 0;
}