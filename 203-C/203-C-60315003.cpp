#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct point
{
    ll a, b, c;
};
int main()
{
    ll n, d, a, b;
    cin >> n >> d >> a >> b;
    vector <point> v(n);
    for(ll i=0; i<n; i++)
    {
        cin >> v[i].a >> v[i].b;
        v[i].a=v[i].a*a;
        v[i].b=v[i].b*b;
        v[i].c=i+1;
    }
    sort(v.begin(), v.end(), [](auto p1, auto p2){return p1.a+p1.b<p2.a+p2.b;});
    ll sum=0;
    set <ll> ms;
    for(auto i:v)
    {
        ll cnt=i.a+i.b;
        if(sum+cnt>d)
            break;
        sum+=cnt;
        ms.insert(i.c);
    }
    cout << ms.size() << endl;
    if(!ms.empty())
        for(auto i:ms)
          cout << i << " ";
    return 0;
}