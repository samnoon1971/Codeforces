#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x, k;
    cin >> n >> x;
    vector <ll> v;
    for(ll i=0; i<n; i++)
    {
        cin >> k;
        v.push_back(k);
    }
    ll sum=0;
    sort(v.begin(), v.end());
    for(auto i:v)
    {
        sum+=x*i;
        if(x>1)
            x--;
    }
    cout << sum << endl;
    return 0;
}