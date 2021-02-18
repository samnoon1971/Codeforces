#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m, x;
    cin >> n >> m;
    int cnt=0, k=0;
    int a[n][2*m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*m; j+=2)
        {
            if(a[i][j]==1 || a[i][j+1]==1)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}