#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll x=n/k;
    if(x%2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}