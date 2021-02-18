#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll check(ll x, ll n)
{
    ll cnt = 0;
    while(n)
    {
        if(x<=n)
        {
            cnt += x;
            n -= x;
        }
        else
        {
            cnt += n;
            n = 0;
        }
        ll rem = n/10;
        n -= rem;
    }
    return cnt;
}

int main()
{
    ll n;
    cin >> n;
    ll ans = 3e18, lb = 1, ub = 1e18;
    while(lb <= ub)
    {
        ll mid = (lb + ub) >> 1;
        if(check(mid, n) >= (n+1)/2)
        {
            ans = min(ans, mid);
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    cout << ans << endl;
}