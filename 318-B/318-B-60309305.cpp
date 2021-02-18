#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    ll n=s.size();
    ll a[n];
    memset(a, 0, sizeof a);
    for(ll i=0; i<n-4; i++)
    {
        string b=s.substr(i, 5);
        if(b=="heavy")
            a[i]=1;
        else if(b=="metal")
            a[i]=2;
    }
    ll sum=0, cur=0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]==1)
            cur++;
        else if(a[i]==2)
            sum+=cur;
    }
    cout << sum << endl;
    return 0;
}