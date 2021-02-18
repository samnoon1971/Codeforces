#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    if(n>m)
    {
        ll cnt=n%m;
        ll x=cnt*b, y=(m-cnt)*a;
        cout << min(x, y) << endl;
    }
    else
    {
        if(n<m-n)
        {
            cout << n*b << endl;
        }
        else if(m-n<n)
        {
            cout << a*(m-n) << endl;
        }
        else
        {
            cout << min(a, b)*n << endl;
        }
    }
    return 0;
}