#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sp(vector <int> adj[], bool visited[], int distance[])
{
    visited[1]=true;
    distance[1]=0;
    queue <int> q;
    q.push(1);
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(auto u:adj[s])
        {
            if(visited[u])
                continue;
            visited[u] = true;
            distance[u] = distance[s]+1;
            q.push(u);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> a[n+1], b[n+1];
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            int cnt=count(a[i].begin(), a[i].end(), j);
            if(!cnt)
            {
                b[i].push_back(j);
                b[j].push_back(i);
            }
        }
    }
    bool visited[n+1];
    memset(visited, false, sizeof(visited));
    int da[n+1]={0}, db[n+1]={0};
    sp(a, visited, da);
    memset(visited, false, sizeof(visited));
    sp(b, visited, db);
    if(da[n] && db[n])
        cout << max(da[n], db[n]) << endl;
    else
        cout << -1 << endl;
    return 0;
}