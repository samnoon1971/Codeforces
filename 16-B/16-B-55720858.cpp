#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll n, m;
   cin >> n >> m;
   vector <pair<ll, ll> > v(m);
   for(ll i=0; i<m; i++)
   {
     cin >> v[i].first >> v[i].second;
   }
   sort(v.begin(), v.end(), [](auto p1, auto p2){return p1.second>p2.second;});
   ll sum=0, cnt=0;
   for(auto i:v)
   {
       sum+=i.second*min(n-cnt, i.first);
       cnt+=i.first;
       if(cnt>=n)
        break;
   }
   cout << sum << endl;
   return 0;
}