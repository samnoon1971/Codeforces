#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 500
bool visited[M][M];
int mark[M][M];
char grid[M][M];
bool validCheck(int x, int y, int n, int m)
{
    return (x>=0 && x<n && y>=0 && y<m);
}
void dfs(char grid[][M], int x, int y, int n, int m, bool visited[][M], int &sum, int cnt, int mark[][M])
{
    int r[]={-1, 0, 0, 1}, c[]={0, -1, 1, 0};
    visited[x][y]=true;
    sum++;
    if(sum>cnt)
        mark[x][y]=1;
    else
        mark[x][y]=2;
    for(int i=0; i<4; i++)
    {
        int px=x+r[i];
        int py=y+c[i];
        if(validCheck(px, py, n, m))
        {
            if(grid[px][py]=='#')
            continue;
            if(!visited[px][py])
                dfs(grid, px, py, n, m, visited, sum, cnt, mark);
        }
    }
}
int main()
{
    int n, m, k, cnt=0;
    cin >> n >> m >> k;
    int x, y;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> grid[i][j];
            {
                if(grid[i][j]=='.')
                {
                    cnt++;
                    x=i;
                    y=j;
                }
            }
        }
    }
    int sum=0;
    dfs(grid, x, y, n, m, visited, sum, cnt-k, mark);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mark[i][j]==0)
                cout << '#';
            else if(mark[i][j]==1)
                cout << 'X';
            else
                cout << '.';
        }
        cout << endl;
    }
    return 0;
}