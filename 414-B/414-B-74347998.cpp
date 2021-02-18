#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) std :: cout << "VUL -> " << x << endl
const ll MOD = 1e9+7;
const ll N = 2010;
ll dp[N][N];
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        dp[1][i] = 1;
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            for(int k=1; j*k<=n; k++)
            {
                dp[i+1][j*k] += (dp[i][j] + MOD)%MOD;
            }
        }
    }
    ll ans = 0;
    for(int i=1; i<=n; i++)
    {
        ans += dp[m][i];
        ans = (ans + MOD)%MOD;
    }
    cout << ans << endl;
    return 0;
}