#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 2001
char grid[N][N];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<m; j++)
        {
            grid[i][j]=s[j];
        }
    }
    int sum=0;
    if(k==1)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='.')
                    sum++;
            }
        }
        cout << sum << endl;
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        int cnt=0;
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]=='.')
                cnt++;
            else
            {
                if(cnt>=k)
                  sum+=(cnt-k+1);
                cnt=0;
            }
            if(j==m-1)
            {
               if(cnt>=k)
                    sum+=(cnt-k+1);
            }
        }

    }
    for(int i=0; i<m; i++)
    {
        int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(grid[j][i]=='.')
                cnt++;
            else
            {
                if(cnt>=k)
                    sum+=(cnt-k+1);
                cnt=0;
            }
            if(j==n-1)
            {
              if(cnt>=k)
                 sum+=(cnt-k+1);
            }
        }
    }
    cout << sum << endl;
    return 0;
}