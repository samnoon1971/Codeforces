#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10;

int main()
{
    string s;
    cin >> s;
    ll cnt = 0;
    while(s.size()!=1)
    {
        ll sum = 0;
        for(ll i=0; i<s.size(); i++)
        {
            sum += s[i]-'0';
        }
        cnt++;
        s = to_string(sum);
    }
    cout << cnt << endl;
    return 0;
}