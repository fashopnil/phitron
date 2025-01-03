#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
vector<int> adj[maxN];
bool visited[maxN];
void dfs(int node)
{
    visited[node] = true;
    cout << node << " ";
    for (int child : adj[node])
    {
        if (!visited[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= e; i++)
    {
        cout << i << " ->";
        for (int child : adj[i])
        {
            cout << child << " ";
        }
        cout << endl;
    }
    dfs(1);

    return 0;
}
