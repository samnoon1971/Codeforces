#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 51
vector <ll> vec[N];
ll vis[N];
void dfs(ll x, ll &sum)
{
    for(auto i:vec[x])
        {
            if(vis[i])
                continue;
            vis[i]=true;
            dfs(i, sum);
            sum*=2;
        }
}
int main()
{
    ll n, m;
    cin >> n >> m;
    for(ll i=0; i<m; i++)
    {
        ll x, y;
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    ll sum=1;
    for(ll i=1; i<=n; i++)
    {
        if(vis[i])
            continue;
        vis[i]=true;
        dfs(i, sum);
    }
    cout << sum << endl;
    return 0;
}