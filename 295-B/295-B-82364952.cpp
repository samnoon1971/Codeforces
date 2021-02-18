#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 510;
ll graph[N][N], c[N];
int main()
{
    ll n;
    cin >> n;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            cin >> graph[i][j];
        }
    }
    for(ll i=0; i<n; i++)
    {
        cin >> c[i];
    }

    vector <ll> vx, vy;
    for(ll k=n-1; k>=0; k--)
    {
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][c[k]] + graph[c[k]][j]);
            }
        }
        vx.push_back(c[k]);
        ll res = 0;
        for(auto i:vx)
        {
            for(auto j:vx)
            {
                res += graph[i][j];
            }
        }
        vy.push_back(res);
    }
    reverse(vy.begin(), vy.end());
    for(auto i:vy)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}