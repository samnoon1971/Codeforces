#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1001
vector <int> adj[M];
bool vis[M];
void dfs(int n)
{
    if(vis[n])
        return;
    vis[n]=true;
    for(auto i:adj[n])
        dfs(i);
}
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(m+1!=n)
    {
        cout << "no" << endl;
        return 0;
    }
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i])
            continue;
        dfs(i);
        cnt++;
    }
    if(cnt==1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}