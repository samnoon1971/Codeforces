#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(int src, int cur, vector <int> adj[], bool visited[], int color[], int& sum)
{
    if(visited[cur])
        return;
    visited[cur]=true;
    if(color[cur]!=color[src])
        sum++;
    for(auto i:adj[cur])
    {
        dfs(cur, i, adj, visited, color, sum);
    }
}

int main()
{
    int n;
    cin >> n;
    int color[n+1]={0};
    bool visited[n+1];
    vector <int> adj[n+1];
    memset(visited, false, sizeof(visited));
    for(int i=2; i<=n; i++)
    {
        int x;
        cin >> x;
        adj[x].push_back(i);
    }
    for(int i=1; i<=n; i++)
        cin >> color[i];
    int sum=0;
    dfs(0, 1, adj, visited, color, sum);
    cout << sum << endl;
    return 0;
}