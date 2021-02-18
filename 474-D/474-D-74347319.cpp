#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
const ll N = 1e5+10;
ll dp[N], ans[N];
void init(int k)
{
    dp[0] = 1;
    for(int i=1; i<N; i++)
    {
        if(i<k)
            dp[i] = dp[i-1];
        else
            {
                dp[i] = dp[i-1] + dp[i-k];
                dp[i] %= MOD;
            }
    }
    for(int i=1; i<N; i++)
    {
        ans[i] = ans[i-1] + dp[i];
        ans[i] %= MOD;
    }
}
int main()
{
    int t, k;
    cin >> t >> k;
    init(k);
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll res = (ans[b] - ans[a-1] + MOD)%MOD;
        cout << res << endl;
    }
    return 0;
}