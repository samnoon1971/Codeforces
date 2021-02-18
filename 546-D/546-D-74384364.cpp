#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) std :: cout << "VUL -> " << x << endl
const ll MOD = 1e9+7;
const ll N = 5e6+10;
ll dp[N], mark[N];
void seive()
{
    for(ll i=2; i<N; i+=2)
    {
        mark[i] = 2;
    }
    for(ll i=3; i<N; i+=2)
    {
        if(!mark[i])
        {
            mark[i] = i;
            for(ll j=i; j*i<N; j+=2)
            {
                if(mark[j*i])
                   continue;
                mark[j*i] = i;
            }
        }
    }
}
ll initdiv(ll n)
{
   ll sum = 0, temp = n;
   while(n>1)
   {
       ll cnt = 0;
       while(temp%mark[n]==0)
       {
           temp/=mark[n];
           cnt++;
       }
       sum += cnt;
       n = temp;
   }
   return sum;
}

int main()
{
    ll t;
    scanf("%lld", &t);
    seive();
    for(ll i=1; i<N; i++)
    {
        dp[i] = initdiv(i);
        dp[i] += dp[i-1];
    }
    while(t--)
    {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", dp[a] - dp[b]);
    }
    return 0;
}