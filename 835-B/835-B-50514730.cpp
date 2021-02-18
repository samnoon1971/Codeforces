#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k, sum=0;
    cin >> k;
    string s;
    vector <ll> v;
    cin >> s;
    for(int i=0; i<s.size(); i++)
        {
            v.push_back(s[i]-48);
            sum+=s[i]-48;
        }
    sort(v.begin(), v.end());
    ll cnt=0, m=0;
    for(auto i:v)
    {
        if(sum<k)
           {
               sum+=9-i;
               m++;
           }
        else
            break;
    }
    cout << m << endl;
    return 0;
}