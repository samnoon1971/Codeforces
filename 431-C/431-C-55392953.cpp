#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int limit=101;
const long long MOD=1e9+7;
ll f[limit][2];
void init()
{
    for(ll i=0; i<limit; i++)
    {
        f[i][0]=-1;
        f[i][1]=-1;
    }
}
ll calc(ll n, ll k, ll d, ll sum, ll p)
{
    if(sum>n)
        return 0;
    if(sum==n && p)
        return 1;
    else if(sum==n && !p)
        return 0;
    if(f[sum][p]!=-1)
        return f[sum][p];
    ll cnt=0;
    for(ll i=1; i<=k; i++)
    {
        if(i<d)
            cnt=(cnt+calc(n, k, d, sum+i, p))%MOD;
        else
            cnt=(cnt+calc(n, k, d, sum+i, 1))%MOD;
    }
    f[sum][p]=cnt;
    return cnt;
}
int main()
{
   ll n, k, d;
   cin >> n >> k >> d;
   init();
   ll sum=calc(n, k, d, 0, 0);
   cout << sum << endl;
   return 0;
}