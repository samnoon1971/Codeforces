#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ld LIMIT=1e-12;
int main()
{
    ll r, x, y, a, b;
    cin >> r >> x >> y >> a >> b;
    ld sum=sqrt((x-a)*(x-a)+(y-b)*(y-b));
    ld d=2*r;
    ll cnt=0;
    while(sum>LIMIT)
    {
        sum-=d;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}