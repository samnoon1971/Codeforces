#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    set <ll> mx, my;
    multiset <ll> mpx, mpy;
    set <pair<ll, ll> > md;
    multiset <pair<ll, ll> > mdp;
    for(ll i=0; i<n; i++)
    {
        ll x, y;
        cin >> x >> y;
        mx.insert(x);
        mpx.insert(x);
        my.insert(y);
        mpy.insert(y);
        md.insert({x, y});
        mdp.insert({x, y});
    }
    ll sum=0;
    for(auto i:mx)
    {
        ll cnt=mpx.count(i);
        if(cnt>1)
        {
            sum+=(cnt*(cnt-1))/2;
        }
    }
    for(auto i:my)
    {
        ll cnt=mpy.count(i);
        if(cnt>1)
        {
            sum+=(cnt*(cnt-1))/2;
        }
    }

    for(auto i:md)
    {
        ll cnt=mdp.count(i);
        sum-=(cnt*(cnt-1))/2;
    }
    cout << sum << endl;
    return 0;
}