#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    scanf("%lld", &n);
    while(n--)
    {
        ll p, q, b;
        scanf("%lld %lld %lld", &p, &q, &b);
        while(__gcd(p, q)!=1)
        {
            ll x=__gcd(p, q);
            p/=x;
            q/=x;
        }
        while(__gcd(q, b)!=1)
        {
            ll x=__gcd(q, b);
            b=x;
            q/=x;
        }
        if(q==1)
            cout << "Finite" << endl;
        else
            cout << "Infinite" << endl;
    }
    return 0;
}