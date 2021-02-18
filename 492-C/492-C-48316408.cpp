#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, r, avg;
    cin >> n >> r >> avg;
    vector <pair <ll, ll> > v;
    ll a, b, sum=0;
    for(ll i=0; i<n; i++)
    {
        cin >> a >> b;
        sum+=a;
        v.push_back(make_pair(a, b));
    }
    ll cnt=avg*n-sum, sol=0;
    sort(v.begin(), v.end(), [](pair <ll, ll> p1, pair <ll, ll> p2){return p1.second<p2.second;});;
    for(auto i:v)
    {
        if(cnt<=0)
          break;
        ll x=r-i.first, y=i.second;
        if(x>cnt)
        {
            sol+=cnt*y;
            cnt=0;
        }
        else
        {
            sol+=x*y;
            cnt-=x;
        }
    }
    cout << sol << endl;
    return 0;
}