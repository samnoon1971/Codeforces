#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<ll, pair<ll, ll> > &p1, pair<ll, pair<ll, ll> > &p2)
{
    if(p1.second.first!=p2.second.first)
        return p1.second.first<p2.second.first;
    return p1.second.second>p2.second.second;
}
int main()
{
    ll n;
    cin >> n;
    vector <pair<ll, pair<ll, ll> > > v(n);
    for(ll i=0; i<n; i++)
    {
        v[i].first=i+1;
        cin >> v[i].second.first >> v[i].second.second;
    }
    sort(v.begin(), v.end(), cmp);
    pair<ll, pair<ll, ll> > pp=*v.begin();
    vector <pair<ll, pair<ll, ll> > > :: iterator it;
    for(it=v.begin()+1; it!=v.end(); it++)
    {
        if(it->second.second<=pp.second.second)
        {
            cout << it->first << " " << pp.first << endl;
            return 0;
        }
        else
        {
            pp=*it;
        }
    }
    cout << -1 << " " << -1 << endl;
    return 0;
}