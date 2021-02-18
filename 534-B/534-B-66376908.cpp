#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 110;
int main()
{
    int x, y, t, d;
    cin >> x >> y >> t >> d;
    int ans=0;
    for(int i=0; i<t; i++)
    {
        ans+=min(x+d*i, y+(t-i-1)*d);
    }
    cout << ans << endl;
    return 0;
}