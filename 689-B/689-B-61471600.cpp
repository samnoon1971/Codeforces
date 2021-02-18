#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 200001
int dis[M];
bool vis[M];
vector <int> adj[M];

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
       int x;
       cin >> x;
       adj[i].push_back(x);
       if(i>1)
        adj[i].push_back(i-1);
       if(i<n)
        adj[i].push_back(i+1);
    }
    queue <int> q;
    q.push(1);
    vis[1]=true;
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
            q.push(i);
        }
    }
    for(int i=1; i<=n; i++)
        cout << dis[i] << " ";
    return 0;
}