#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10;
ll a[N], b[N];
ll result(ll n)
{
    ll ans = 0, sum = 0;
    for(ll i=1; i<n; i++)
    {
        sum += b[i];
        ans = max(ans, sum);
        sum = max(0LL, sum);
    }
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
        if(i)  b[i] = abs(a[i] - a[i-1]);
    }
    ll ans = 0;
    for(ll i=1; i<n; i++)
    {
        if(i%2)
            continue;
        b[i] *= -1;
        i++;
    }
    ans = max(ans, result(n));
    for(ll i=1; i<n; i++)
    {
        b[i] *= -1;
    }
    ans = max(ans, result(n));
    cout << ans << endl;
    return 0;
}