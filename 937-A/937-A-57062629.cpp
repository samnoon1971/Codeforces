#include <bits/stdc++.h>
using namespace std;
int a[601];
int main()
{
    int n, x;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        a[x]++;
    }
    int ans=0;
    for(int i=1; i<=600; i++)
    {
        if(a[i])
            ans++;
    }
    cout << ans << endl;
    return 0;
}