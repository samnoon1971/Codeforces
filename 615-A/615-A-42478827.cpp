#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x, y;
    set <int> ms;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        for(int j=0; j<x; j++)
        {
            cin >> y;
            ms.insert(y);
        }
    }
    if(ms.size()==m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}