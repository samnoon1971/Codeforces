#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10, MOD = 1e9+7;
ll dp[N];
int main()
{
    ll t, k;
    cin >> t >> k;
    for(ll i=0; i<N; i++)
    {
        if(i<k)
            dp[i] = 1;
        else
            dp[i] = (dp[i-1] + dp[i-k])%MOD;
    }
    for(ll i=1; i<N; i++)
    {
        dp[i] += dp[i-1];
        dp[i] %= MOD;
    }
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << (dp[b] - dp[a-1] + MOD) % MOD << endl;
    }
    return 0;
}