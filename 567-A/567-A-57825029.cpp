#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m=INT_MAX, p=INT_MIN, x;
    cin >> n;
    vector <ll> v;
    for(ll i=0; i<n; i++)
    {
        cin >> x;
        m=min(m, x);
        p=max(p, x);
        v.push_back(x);
    }
    for(auto i:v)
    {
        i+=m;
    }
    for(ll i=0; i<n; i++)
    {
        ll x, y;
        if(i>0 && i<n-1)
        {
            x=min(v[i]-v[i-1], v[i+1]-v[i]);
            y=max(v[i]-m, p-v[i]);
        }
        else
        {
            if(i==0)
            {
                x=v[i+1]-v[i];
                y=p-v[i];
            }
            else
            {
                x=v[i]-v[i-1];
                y=v[i]-m;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}