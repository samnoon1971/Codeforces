#include <bits/stdc++.h>
using namespace std;
#define mx 100000
int main()
{
    int n, m, x;
    cin >> n >> m;
    int a[m+1];
    for(int i=0; i<m; i++)
       cin >> a[i];
    sort(a, a+m);
    int cnt=mx;
    for(int i=0; i<=m-n; i++)
        cnt = min(cnt, a[i+n-1]-a[i]);
    cout << cnt << endl;
    return 0;
}