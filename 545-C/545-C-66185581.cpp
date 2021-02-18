#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector <pair<ll, ll> > v(n);
    for(ll i=0; i<n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    ll p=LONG_MIN, cnt=1;
    for(ll i=0; i<n-1; i++)
    {
        if(v[i].first-v[i].second>p)
        {
            cnt++;
            p=v[i].first;
        }
        else if(v[i].first+v[i].second<v[i+1].first)
        {
            cnt++;
            p=v[i].first+v[i].second;
        }
        else
        {
            p=v[i].first;
        }
    }
    cout << cnt << endl;
    return 0;
}