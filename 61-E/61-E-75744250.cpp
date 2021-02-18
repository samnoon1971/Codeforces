#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6+10;
ll tx[N], ty[N];
map <ll, ll> mp;
void update(ll BIT[], ll x, ll val) {++x;  while(x<=N){ BIT[x]+=val,  x+=(x&-x);}}
ll result(ll BIT[], ll x) {++x; ll res=0;  while(x>0){ res+=BIT[x];  x-=(x&-x);} return res;}
ll a[N], b[N];
int main()
{
    int n;
    cin >> n;
    for(ll i=1; i<=n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b+1, b+n+1);
    ll cx = 1;
    for(ll i=1; i<=n; i++)
    {
        if(mp.find(b[i])==mp.end())
            mp[b[i]]=cx++;
    }
    for(ll i=1; i<=n; i++)
    {
        a[i] = mp[a[i]];
    }
    ll ans = 0;
    for(ll i=n; i>0; i--)
    {
        ans += result(ty, a[i]);
        update(ty, a[i], result(tx, a[i]));
        update(tx, a[i], 1);
    }
    cout << ans << endl;
    return 0;
}