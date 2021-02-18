#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n+2], b[n+2];
    for(ll i=0; i<n; i++)
        cin >> a[i];
    ll c=a[0];
    for(ll i=0; i<n+2; i++)
        b[i]=0;
    for(ll i=1; i<n; i++)
    {
        if(c<a[i])
            c=a[i];
        b[c]=b[c]+1;
        if(b[c]>=k)
        {
            cout << c << endl;
            return 0;
        }
    }
    ll m=*max_element(a, a+n);
    cout << m << endl;
    return 0;
}