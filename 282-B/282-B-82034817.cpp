#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6+10;

int main()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    string s;
    for(ll i=0; i<n; i++)
    {
        ll p, q;
        cin >> p >> q;
        if(abs(x + p - y) > 500)
        {
            y += q;
            s += 'G';
        }
        else
        {
            x += p;
            s += 'A';
        }
    }
    if(abs(x-y)>500)
    {
       cout << -1 << endl;
       return 0;
    }
    cout << s << endl;
    return 0;
}