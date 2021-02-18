#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 51
char g[N][N];
bool vis[N][N];
struct node
{
    int x;
    int y;
};
bool isValid(int x, int y, int n, int m)
{
    return x>=0 && x<n && y>=0 && y<m;
}
int r[]={0, 0, 1, -1}, c[]={1, -1, 0, 0};
void dfs(node nd, int n, int m, int &sum, bool &check, node prev)
{
    if(vis[nd.x][nd.y])
        return;
    sum++;
    vis[nd.x][nd.y]=true;
    for(int i=0; i<4; i++)
    {
        int px=nd.x+r[i], py=nd.y+c[i];
        if(isValid(px, py, n, m)!=true)
            continue;
        if(vis[px][py] && px!=prev.x && py!=prev.y && g[px][py]==g[nd.x][nd.y])
        {
            check=true;
            return;
        }
        if(g[px][py]==g[nd.x][nd.y])
        {
            node p;
            p.x=px;
            p.y=py;
            dfs(p, n, m, sum, check, nd);
        }
    }

}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<m; j++)
        {
            g[i][j]=s[j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           if(vis[i][j])
            continue;
           int sum=0;
           bool check=false;
           node p, q;
           p.x=i;
           p.y=j;
           q.x=-1;
           q.y=-1;
           dfs(p, n, m, sum, check, q);
           if(sum>3 && check)
           {
                cout << "Yes" << endl;
                return 0;
           }
      }
    }
    cout << "No" << endl;
    return 0;
}