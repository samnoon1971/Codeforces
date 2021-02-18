#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    if(a==b)
        cout << 1 << endl;
    else if(b-a>=5)
        cout << 0 << endl;
    else
    {
        ll cnt=1;
        for(ll i=a+1; i<=b; i++)
            cnt=(cnt*(i%10))%10;
        cout << cnt << endl;
    }
    return 0;
}