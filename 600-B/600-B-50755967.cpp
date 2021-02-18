#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, m;
    cin >> n >> m;
    vector <ll> a, b;
    ll x;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    for(vector <ll> :: iterator it, ip=b.begin(); ip!=b.end(); ip++)
    {
        it = upper_bound(a.begin(), a.end(), *ip);
        cout << it-a.begin() << " ";
    }
    return 0;
}