#include  <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n >> m;
    int ar[n]={0};
    for(int i=0; i<m; i++)
    {
        cin >> x;
        ar[x-1]++;
    }
    x=ar[0];
    for(int i=0; i<n; i++)
    {
        if(x>ar[i])
            x=ar[i];
    }
    cout << x << endl;
    return 0;
}