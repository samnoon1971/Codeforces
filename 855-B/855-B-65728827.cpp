#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10;
ll dp[N][3], a[N];
int main()
{
    ll n, p, q, r;
    cin >> n >> p >> q >> r;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    dp[0][0]=p*a[0];
    for(ll i=1; i<n; i++)
    {
        dp[i][0]=max(dp[i-1][0], p*a[i]);
    }
    dp[0][1]=dp[0][0]+q*a[0];
    for(ll i=1; i<n; i++)
    {
        dp[i][1]=max(dp[i-1][1], dp[i][0]+q*a[i]);
    }
    dp[0][2]=dp[0][1]+r*a[0];
    for(int i=1; i<n; i++)
    {
        dp[i][2]=max(dp[i-1][2], dp[i][1]+r*a[i]);
    }
    cout << dp[n-1][2] << endl;
    return 0;
}