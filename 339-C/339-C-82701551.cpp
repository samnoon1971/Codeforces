#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map <ll, ll> mp;
string s;
ll m;
ll dfs(ll bal, ll digit, ll step, vector <ll> adj)
{
    if(step == m)
    {
        cout << "YES" << endl;
        for(auto i:adj)
        {
            cout << i << " ";
        }
        cout << endl;
        return 1LL;
    }
    for(ll i=bal+1; i<=10; i++)
    {
        if(mp[i] && i!=digit)
        {
            adj.push_back(i);
            if(dfs(i-bal, i, step+1, adj))
                return 1LL;
            adj.pop_back();
        }
    }
    return 0LL;
}
int main()
{
    cin >> s >> m;
    for(ll i=0; i<10; i++)
    {
       if(s[i]=='1')
        mp[i+1]++;
    }
    vector <ll> vec;
    if(!dfs(0, 0, 0, vec))
    {
        cout << "NO" << endl;
    }
    return 0;
}