#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[k];
    for(int i=0; i<k; i++)
    {
        cin >> a[i];
    }
    int c[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> c[i][j];
        }
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int x=c[i][j];
            for(int p=0; p<k; p++)
            {
                if(a[p]==x)
                {
                    sum+=p+1;
                    while(p!=0)
                    {
                        a[p]=a[p-1];
                        p--;
                    }
                    a[0]=x;
                    break;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}