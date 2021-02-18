#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 3e3+10, M = 3e4+10;
bool mark[N][N];
vector <ll> adj[M];
int main()
{
    ll n, m;
    cin >> n >> m;
    for(ll i=0; i<m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        mark[u][v] = true;
    }
    ll ans = 0;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            if(i!=j)
            {
                ll cnt = 0;
                for(auto k:adj[i])
                {
                    if(mark[k][j])
                        cnt++;
                }
                ans += 1LL * cnt * (cnt - 1) / 2LL;
            }
        }
    }
    cout << ans << endl;
    return 0;
}