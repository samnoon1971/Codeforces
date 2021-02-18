#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(ll i=0; i<n; i++)
    {
        cin >> b[i];
    }
    ll m=LONG_MAX, sum=0;
    for(ll j=1; j<n; j++)
    {
        ll sum=b[j], sum2=LONG_MAX, sum3=LONG_MAX;
        for(ll i=0; i<j; i++)
        {
            if(a[i]<a[j])
                sum2=min(sum2, b[i]);
        }
        for(ll k=j+1; k<n; k++)
        {
            if(a[k]>a[j])
                sum3=min(sum3, b[k]);
        }
        if(sum2!=LONG_MAX && sum3!=LONG_MAX)
            m=min(m, sum+sum2+sum3);
    }
    if(m==LONG_MAX)
        cout << -1 << endl;
    else
        cout << m << endl;
    return 0;
}