#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 100001
vector <int> adj[N];
bool vis[N];
int dis[N];

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
    queue <int> q;
    q.push(1);
    dis[1]=0;
    vis[1]=true;
    pair<int, int> src={-1, -1};
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(auto i:adj[s])
        {
            if(vis[i])
                continue;
            vis[i]=true;
            dis[i]=dis[s]+1;
            if(dis[i]>src.first)
               src={dis[i], i};
            q.push(i);
        }
    }
    int cnt=0;
    q.push(src.second);
    memset(dis, 0, sizeof dis);
    memset(vis, false, sizeof vis);
    vis[src.second]=true;
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(auto i:adj[s])
        {
            if(vis[i])
                continue;
            vis[i]=true;
            dis[i]=dis[s]+1;
            cnt=max(cnt, dis[i]);
            q.push(i);
        }
    }
    cout << cnt << endl;
    return 0;
}