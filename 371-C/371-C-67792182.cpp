#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll LIMIT = 1e15+10;
int main()
{
    string s;
    ll nb, ns, nc, pb, ps, pc;
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc;
    ll r;
    cin >> r;
    ll cx=0, cy=0, cz=0, n=s.size();
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='B')
            cx++;
        else if(s[i]=='S')
            cy++;
        else
            cz++;
    }
    ll ans=0;
    ll lb=1, ub=LIMIT;
    while(lb<=ub)
    {
        ll mid = lb+(ub-lb)/2;
        ll mb = max(mid*cx-nb, 0LL)*pb;
        ll ms = max(mid*cy-ns, 0LL)*ps;
        ll mc = max(mid*cz-nc, 0LL)*pc;
        ll total = mb+ms+mc;
        if(r>=total)
        {
            ans=max(ans, mid);
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}