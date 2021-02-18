#include <bits/stdc++.h>
using namespace std;
int sum=0;
void dfs(int x, int m, int cnt, vector <int> adj[], bool visited[], int c[])
{
    if(visited[x])
        return;
    visited[x]=true;

    for(auto i:adj[x])
    {
        if(c[i]+cnt>m)
            continue;
        if(!c[i])
            dfs(i, m, 0, adj, visited, c);
        else
            dfs(i, m, cnt+1, adj, visited, c);
    }
    if(adj[x].size()==1 && x>1)
            sum++;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int c[n+1];
    for(int i=1; i<=n; i++)
        cin >> c[i];
    vector <int> v[n+1];
    for(int i=0; i<n-1; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bool visited[n+1];
    memset(visited, false, sizeof(visited));
    dfs(1, m, c[1], v, visited, c);
    cout << sum << endl;
    return 0;
}