#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10;
const ll MOD = 1e9+7;
bool vis[N];
ll dp[N][2], mark[N];
vector <ll> adj[N];
void dfs(ll node, ll par)
{
    if(vis[node])
        return;
    vis[node] = true;
    dp[node][0] = 1;
    dp[node][1] = 0;
    for(auto next:adj[node])
    {
        if(next!=par)
        {
            dfs(next, node);
            dp[node][1] = dp[node][1] * dp[next][0];
            dp[node][1] %= MOD;
            dp[node][1] = dp[node][1] + dp[node][0] * dp[next][1];
            dp[node][1] %= MOD;
            dp[node][0] = dp[node][0] * dp[next][0];
            dp[node][0] %= MOD;
        }
    }
    if(mark[node])
        dp[node][1] = dp[node][0];
    else
        dp[node][0] = dp[node][0] + dp[node][1];
    dp[node][1] %= MOD;
    dp[node][0] %= MOD;
}

int main()
{
    ll n;
    cin >> n;
    for(ll i=1; i<n; i++)
    {
        ll x;
        cin >> x;
        adj[i].push_back(x);
        adj[x].push_back(i);
    }
    for(ll i=0; i<n; i++)
    {
        cin >> mark[i];
    }
    dfs(0, -1);
    cout << dp[0][1] << endl;
    return 0;
}