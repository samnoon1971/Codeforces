#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x;
    vector <ll> v;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    ll sum=*v.begin(), cnt=*v.begin();
    for(vector <ll> :: iterator it=v.begin()+1; it!=v.end(); it++)
    {
        cnt=min(cnt-1, *it);
        if(!cnt)
            break;
        sum+=cnt;
    }
    cout << sum << endl;
    return 0;
}