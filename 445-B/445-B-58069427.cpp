#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 51
ll parent[N];
ll sz[N];
ll findSet(ll v)
{
    if(v==parent[v])
    return v;
    return parent[v]=findSet(parent[v]);
}
void makeSet(ll v)
{
    parent[v]=v;
    sz[v]=1;
}
void unionSet(ll a, ll b)
{
    a=findSet(a);
    b=findSet(b);
    if(a==b)
        return;
    if(sz[a]<sz[b])
    swap(a, b);
    parent[b]=a;
    sz[a]+=sz[b];
}
void initialize(ll n)
{
    for(ll i=1; i<=n; i++)
        makeSet(i);
}
ll power(ll a, ll b)
{
    if(!b)
        return 1;
    ll r=power(a, b/2);
    if(b%2)
        return r*r*a;
    return r*r;
}
int main()
{
   ll n, m;
   cin >> n >> m;
   initialize(n);
   for(ll i=0; i<m; i++)
   {
       ll x, y;
       cin >> x >> y;
       unionSet(x, y);
   }
   set <ll> ms;
   for(ll i=1; i<=n; i++)
   {
       ms.insert(findSet(i));
   }
   ll k=ms.size();
   cout << power(2, n-k) << endl;
   return 0;

}