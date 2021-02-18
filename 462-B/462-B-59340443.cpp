#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set <char> mp;
    for(ll i=0; i<n; i++)
    {
        mp.insert(s[i]);
    }
    ll sum=0;
    vector <ll> v;
    for(auto i:mp)
    {
        ll cnt=count(s.begin(), s.end(), i);
        v.push_back(cnt);
    }
    sort(v.rbegin(), v.rend());
    for(auto i:v)
    {
        if(k==0) break;
        ll cnt=i;
        if(cnt>k)
        {
            sum+=k*k;
            k=0;
        }
        else
        {
            sum+=cnt*cnt;
            k-=cnt;
        }
    }
    cout << sum << endl;
    return 0;
}