#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char c[n+1][m+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> c[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int row[8]={-1, 1, 1, -1, 1, -1, 0, 0};
            int col[8]={-1, 1, -1, 1, 0, 0, 1, -1};
            if(c[i][j]=='.')
            {
                for(int x=0; x<8; x++)
                {
                    int lb=i+row[x], ub=j+col[x];
                    if((lb<0 || lb>n) || (ub<0 || ub>m))
                        continue;
                    if(c[lb][ub]=='*')
                    {

                        cout << "NO" << endl;
                        return 0;
                    }
                }
            }
            else if(c[i][j]!='*')
            {
                int k=c[i][j]-'0', cnt=0;
                for(int x=0; x<8; x++)
                {
                    int lb=i+row[x], ub=j+col[x];
                if((lb<0 || lb>n) || (ub<0 || ub>m))
                        continue;
                    if(c[lb][ub]=='*')
                        cnt++;
                }
                if(cnt!=k)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}