#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    if(k==n)
        cout << a[k-1] << endl;
    else if(k==0)
    {
        if(a[k]==1)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
    else
    {
        if(a[k-1]!=a[k])
            cout << a[k-1] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}