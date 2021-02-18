#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll data;
    bool op;
};
const ll N = 1e6+10;
ll a[N];
node t[4*N];
void build(ll v, ll tl, ll tr)
{
    if (tl == tr)
    {
        t[v].data = a[tl];
        t[v].op = true;
    }
    else
    {
        ll tm = (tl + tr) >> 1;
        build(v*2, tl, tm);
        build(v*2+1, tm+1, tr);
        if(t[2*v].op)
        {
            t[v].op = false;
            t[v].data = t[v*2].data | t[v*2+1].data;
        }
        else
        {
            t[v].op = true;
            t[v].data = t[v*2].data ^ t[v*2+1].data;
        }
    }
}
void update(ll v, ll tl, ll tr, ll pos, ll new_val)
{
    if (tl == tr)
    {
        t[v].data = new_val;
    }
    else
    {
        ll tm = (tl + tr) >> 1;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        if(t[2*v].op)
            t[v].data = t[v*2].data | t[v*2+1].data;
        else
            t[v].data = t[v*2].data ^ t[v*2+1].data;
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    n = pow(2, n);
    for(ll i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    build(1, 1, n);
    while(m--)
    {
        ll p, b;
        cin >> p >> b;
        update(1, 1, n, p, b);
        cout << t[1].data << endl;
    }
    return 0;
}