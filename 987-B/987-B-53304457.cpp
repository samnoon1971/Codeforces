#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double eps = 1e-7;
typedef long double ld;
int main()
{
    ll x, y;
    cin >> x >> y;
    ld a = y*log(x)+eps, b = x*log(y)+eps;
    if(abs(a-b) < eps)
        cout << '=' << endl;
    else if(a>b)
        cout << '>' << endl;
    else
        cout << '<' << endl;
    return 0;
}