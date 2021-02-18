#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    set <int> ms;
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        ms.insert(u);
        ms.insert(v);
    }
    int src;
    for(int i=1; i<=n; i++)
    {
        if(!ms.count(i))
        {
            src=i;
            break;
        }
    }
    cout << n-1 << endl;
    for(int i=1; i<=n; i++)
    {
        if(src!=i)
            cout << i << " " << src << endl;
    }
    return 0;
}