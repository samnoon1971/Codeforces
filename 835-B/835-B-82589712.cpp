#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll getSum(string s)
{
    ll n = s.size(), sum = 0;
    for(ll i=0; i<n; i++)
    {
        sum += s[i] - '0';
    }
    return sum;
}
int main()
{
    ll k;
    string s;
    cin >> k >> s;
    ll cnt = 0, sum = getSum(s);
    ll n = s.size();
    map <ll, ll> mp;
    for(ll i=0; i<n; i++)
    {
        ll num = s[i] - '0';
        mp[num]++;
    }
    for(ll i=0; i<10; i++)
    {
        for(int j=0; j<mp[i]; j++)
        {
            if(sum < k)
            {
                cnt++;
                sum += 9 - i;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}