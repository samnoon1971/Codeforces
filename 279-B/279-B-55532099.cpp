#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, t;
    cin >> n >> t;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll lb=0, ub=0, sum=0, cnt=0;
    while(lb<n)
    {
        while(ub<n)
        {
            if(sum+a[ub]>t)
                break;
            sum+=a[ub];
            ub++;
        }
        cnt=max(cnt, ub-lb);
        sum-=a[lb];
        lb++;
    }
    cout << cnt << endl;
    return 0;
}