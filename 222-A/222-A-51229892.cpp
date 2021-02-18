#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, k, cnt=0;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]!=a[k-1])
        {
            if(i>=k-1)
            {
                cout << -1 << endl;
                return 0;
            }
            else
                cnt=i+1;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}