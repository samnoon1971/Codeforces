#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    ll n;
    cin >> n;
    ll sum=0;
    for(ll i=n; i*i*i>sum; i--)
    {
        for(ll j=n; i*j*j>sum; j--)
            for(ll k=n; i*j*k>sum; k--)
            {
                if(gcd(i, j)==1 && gcd(i, k)==1 && gcd(j, k)==1)
                    sum=i*j*k;
            }
    }
    cout << sum << endl;
    return 0;
}