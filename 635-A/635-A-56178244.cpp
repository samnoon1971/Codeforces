#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 11
int m[MAXN][MAXN];
int solve(int i1, int j1, int i2, int j2, int k)
{
    int x=0;
    for(int i=i1; i<i2; i++)
    {
        for(int j=j1; j<j2; j++)
            x+=m[i][j];
    }
    if(x>=k)
      return 1;
    return 0;
}
int main()
{
    int r, c, n, k;
    cin >> r >> c >> n >> k;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        m[x][y]=1;
    }
    int sum=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int i1=i; i1<r; i1++)
            {
                for(int j1=j; j1<c; j1++)
                {
                    sum+=solve(i, j, i1+1, j1+1, k);
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}