#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    int cnt=((n+1)/2 + m - 1) / m;
    if(cnt*m <= n)
        cout << cnt*m << endl;
    else
        cout << -1 << endl;
    return 0;
}