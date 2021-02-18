#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1001
int row[N], col[N], a[N][N];
void init()
{
    for(int i=1; i<N; i++)
    {
        col[i]=i;
        row[i]=i;
    }
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    init();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    while(k--)
    {
        char c;
        int i, j;
        scanf(" %c %d %d", &c, &i, &j);
        if(c=='c')
        {
            swap(col[i], col[j]);
        }
        else if(c=='r')
        {
            swap(row[i], row[j]);
        }
        else
        {
            printf("%d\n", a[row[i]][col[j]]);
        }
    }
    return 0;
}