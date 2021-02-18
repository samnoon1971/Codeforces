#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k, x=0;
    cin >> n >> k;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    while(k-x>0)
    {
        k-=x;
        x++;
    }
    cout << a[k-1] << endl;
    return 0;
}