#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10;
vector <ll> adj[N];
ll col[N];
vector <pair<ll, ll> > path;
void dfs(ll x, ll y, ll z, ll &p)
{
    if(col[x]!=z)
    {
        p++;
        return;
    }
    for(auto i:adj[x])
    {
        if(i==y)
            continue;
        dfs(i, x, z, p);
    }
}
ll solve(ll n)
{
    ll check = 0;
    for(auto i:adj[n])
    {
        ll x = col[i], y = 0;
        dfs(i, n, x, y);
        if(y)
        {
           check++;
           break;
        }
    }
    if(check)
        return 0;
    return 1;
}

int main()
{
    ll n;
    cin >> n;
    for(ll i=0; i<n-1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        path.push_back({u, v});
    }
    for(ll i=1; i<=n; i++)
    {
        cin >> col[i];
    }
    vector <ll> vec;
    for(auto i:path)
    {
        ll u = i.first, v = i.second;
        if(col[u] != col[v])
        {
            vec.push_back(u);
            vec.push_back(v);
            break;
        }
    }
    if(vec.empty()!=true)
    {
        for(auto i:vec)
        {
          if(solve(i))
          {
            cout << "YES" << endl;
            cout << i << endl;
            return 0;
          }
        }
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    cout << 1 << endl;
    return 0;
}