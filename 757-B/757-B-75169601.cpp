#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10;
ll mark[N];

int main()
{
    ll n;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
       ll x;
       cin >> x;
       for(ll j=2; j*j<=x; j++)
       {
           if(x%j==0)
           {
               mark[j]++;
           }
           while(x%j==0)
           {
               x/=j;
           }
       }
           if(x>1)
            mark[x]++;
    }
    ll ans = 1;
    sort(mark, mark+N);
    reverse(mark, mark+N);
    cout << max(ans, mark[0]) << endl;
    return 0;
}