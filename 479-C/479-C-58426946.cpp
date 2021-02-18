#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector <pair<ll, ll> > v;
    for(int i=0; i<n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    ll cnt=0;
    for(auto i:v)
    {
        if(cnt<=i.second)
            cnt=i.second;
        else
            cnt=i.first;
    }
    cout << cnt << endl;
    return 0;
}