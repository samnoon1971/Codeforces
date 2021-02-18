#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct knight
{
    ll power, coin, id;
};
bool cmp(struct knight k1, struct knight k2)
{
    return k1.power<k2.power;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    knight a[n];
    for(ll i=0; i<n; i++)
        cin >> a[i].power;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i].coin;
        a[i].id=i;
    }
    ll b[n];
    sort(a, a+n, cmp);
    priority_queue <ll> pq;
    for(ll i=0; i<n; i++)
    {
        vector <ll> v;
        ll x=0, sum=a[i].coin;

        while(!pq.empty())
        {
            if(x==k)break;
            ll y=pq.top();
            sum+=y;
            v.push_back(y);
            pq.pop();
            x++;
        }
        pq.push(a[i].coin);
        for(auto it:v)
            pq.push(it);
        ll p=a[i].id;
        b[p]=sum;
     }
     for(ll i=0; i<n; i++)
        cout << b[i] << " ";
     return 0;
}