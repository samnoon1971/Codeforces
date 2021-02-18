#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10;
ll a[N], dp[N][2];
int main()
{
    ll n;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(ll i=2; i<=n; i++)
    {
        dp[i][0] = abs(a[i-2]-a[i-1]);
        dp[i][1] = dp[i][0];
    }
    ll ans = 0;
    for(ll i=2; i<=n; i++)
    {
        dp[i][0] = max(dp[i][0], dp[i][0] + dp[i-2][0] - dp[i-1][1]);
        ans = max(ans, dp[i][0]);
    }
    cout << ans << endl;
    return 0;
}