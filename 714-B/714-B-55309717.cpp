#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x;
    cin >> n;
    set <ll> ms;
    ll m1=LONG_MIN, m2=LONG_MAX;
    for(ll i=0; i<n; i++)
    {
        cin >> x;
        ms.insert(x);
    }
    if(ms.size()==1 || ms.size()<3)
    {
        cout << "YES" << endl;
        return 0;
    }
    else if(ms.size()!=3)
    {
        cout << "NO" << endl;
        return 0;
    }
    ll mx=*ms.begin();
    ms.erase(mx);
    ll my=*ms.begin();
    ms.erase(my);
    ll mz=*ms.begin();
    if(2*my==mx+mz)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}