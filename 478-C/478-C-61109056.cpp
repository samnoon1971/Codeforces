#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll r, g, b;
    cin >> r >> g >> b;
    ll ax=max(r, max(g, b)), bx=min(r, min(g, b));
    ll cx=r+g+b-ax-bx;
    ax=min(ax, 2*cx+2*bx);
    cout << (ax+bx+cx)/3 << endl;
    return 0;
}