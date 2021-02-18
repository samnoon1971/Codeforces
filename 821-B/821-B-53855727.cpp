#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll m, b;
    cin >> m >> b;
    ll sum=0, x=0, y=0;
    for(ll i=0; i<=b; i++)
    {
       ll x=m*(b-i);
       ll p=((i+1)*(x+1)*x)/2, q=((x+1)*(i+1)*i)/2;
       sum=max(sum, p+q);
    }
    cout << sum << endl;
    return 0;
}