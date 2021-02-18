#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(b[j]>=a[i])
            {
                b[j]=-1;
                cnt++;
                break;
            }
        }
    }
    cout << n-cnt << endl;
    return 0;
}