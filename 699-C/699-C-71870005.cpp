#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 110;
int a[N], f[N][3];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        f[i][0] = max(f[i-1][0], max(f[i-1][1], f[i-1][2]));
        if(a[i-1]==2 || a[i-1]==3)
            f[i][1] = 1 + max(f[i-1][0], f[i-1][2]);
        else
            f[i][1] = max(f[i-1][0], f[i-1][2]);
        if(a[i-1]==1 || a[i-1]==3)
            f[i][2] = 1 + max(f[i-1][0], f[i-1][1]);
        else
            f[i][2] = max(f[i-1][0], f[i-1][1]);
       ans = max(ans, f[i][0]);
       ans = max(ans, f[i][1]);
       ans = max(ans, f[i][2]);
    }
    cout << n-ans << endl;
    return 0;
}