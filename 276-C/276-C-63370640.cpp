#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+10;
ll a[N], b[N], c[N];

int main()
{
    ll n, q;
    cin >> n >> q;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    while(q--)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        b[x]++;
        b[y]--;
    }
    c[0]=b[0];
    for(ll i=1; i<n; i++)
    {
        c[i]=c[i-1]+b[i];
    }
    sort(a, a+n);
    sort(c, c+n);
    reverse(a, a+n);
    reverse(c, c+n);
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        if(c[i])
        {
            sum+=a[i]*c[i];
        }
        else
            break;
    }
    cout << sum << endl;
    return 0;
}