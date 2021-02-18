#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calc(ll x, ll r, ll g, ll b)
{
     if(r>=x && g>=x && b>=x)
        return x;
     return 0LL;
}
int main()
{
     ll r, g, b;
     cin >> r >> g >> b;
     ll x=0;
     for(ll i=0; i<3; i++)
     {
         ll y=calc(i, r, g, b);
         ll z=(r-y)/3+(g-y)/3+(b-y)/3;
         x=max(x, y+z);
     }
     cout << x << endl;
     return 0;
}