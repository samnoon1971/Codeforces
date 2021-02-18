#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    cin >> n >> m;
    set <ll> row, col;
    for(ll i=0; i<m; i++)
    {
        ll x, y, cx=0, cy=0;
        scanf("%ld %ld", &x, &y);
        row.insert(x);
        col.insert(y);
        cx=n-row.size();
        cy=n-col.size();
        cout << cx*cy << " ";
    }
    return 0;
}