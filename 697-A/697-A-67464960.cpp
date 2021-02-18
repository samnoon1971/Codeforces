#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, s, x;
    cin >> t >> s >> x;
    if((x%s==t%s && t<=x) || (t+1<x && x%s==(t+1)%s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}