#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define DEBUG(c) cout << "Paisi -> " << c << endl;
vector <ll> vec;
bool solve(ll n, ll m)
{
    ll sum = n;
    while(n)
    {
        sum += n%10;
        n/=10;
    }
    return sum==m;
}
int main()
{
    ll n;
    cin >> n;
    for(ll i=n-100; i<=n; i++)
    {
        ll cx = 0;
        if(solve(i, n))
            vec.push_back(i);
    }
    cout << vec.size() << endl;
    for(auto i:vec)
    {
        cout << i << endl;
    }
    return 0;
}