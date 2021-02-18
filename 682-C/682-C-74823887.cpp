#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10;
vector <pair<ll, ll> > adj[N];
ll tree[N], mark[N], subtree[N], counter;
bool vis[N], cnt[N];
void dfs(ll node, ll par)
{
    vis[node] = true;
    subtree[node] = 1;
    for(auto cur:adj[node])
    {
        ll next = cur.first, cost = cur.second;
        if(next!=par && !vis[next])
        {
            tree[next] = max(0LL, tree[node] + cost);

            if(tree[node] + cost > mark[next])
                cnt[next] = true;
            dfs(next, node);
            subtree[node] += subtree[next];

        }
    }
}
int main()
{
    ll n;
    cin >> n;
    for(ll i=1; i<=n; i++)
    {
        cin >> mark[i];
    }
    for(ll i=2; i<=n; i++)
    {
        ll p, c;
        cin >> p >> c;
        adj[i].push_back({p, c});
        adj[p].push_back({i, c});
    }
    dfs(1, 0);
    memset(vis, false, sizeof vis);
    queue <ll> q;
    q.push(1);
    while(!q.empty())
    {
        ll node = q.front();
        q.pop();
        vis[node] = true;
        if(cnt[node])
            counter += subtree[node];
        else
        {
         for(auto cur:adj[node])
         {
            ll next = cur.first;
            if(vis[next])
                continue;
            q.push(next);
         }
        }
    }
    cout << counter << endl;
    return 0;
}