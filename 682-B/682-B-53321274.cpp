#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    multiset <ll> ms;
    ll x;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        ms.insert(x);
    }
    ll cnt=1;
    while(!ms.empty())
    {
        ll m=*ms.begin();
        if(cnt>m)
        {
            ms.erase(m);
        }
        else
        {
            cnt++;
            ms.erase(ms.find(m));
        }
    }
    cout << cnt << endl;
    return 0;
}