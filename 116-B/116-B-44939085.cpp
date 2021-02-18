#include <bits/stdc++.h>
using namespace std;
char a[10][10];
bool isWP(int x, int y)
{
    if(a[x-1][y]=='P' && x)
        return true;
    if(a[x+1][y]=='P' && (x-9))
        return true;
    if(a[x][y-1]=='P' && y)
        return true;
    if(a[x][y+1]=='P' && (y-9))
        return true;
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        for(int k=0; k<m; k++)
            a[i][k]=s[k];
    }
    int k=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='W' && isWP(i, j)==true)
              k++;
        }
    cout << k << endl;
    return 0;
}