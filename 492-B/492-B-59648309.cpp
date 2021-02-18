#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double e = 1e-15;
int main()
{
     ll n, m;
     cin >> n >> m;
     ll a[n];
     for(ll i=0; i<n; i++)
     {
         cin >> a[i];
     }
     sort(a, a+n);
     ll d=0, mx=0;
     for(int i=0; i<n; i++)
     {
         mx=max(mx, a[i]-d);
         d=a[i];
     }
     cout << fixed << setprecision(10) << max((double)a[0], max((double)m-a[n-1], ((double)mx+e)/2)) << endl;
     return 0;
}