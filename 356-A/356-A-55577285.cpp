#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n+1]={0};
    set <int> ms;
    for(int i=1; i<=n; i++)
        ms.insert(i);
    for(int i=0; i<m; i++)
    {
        vector <int> v;
        int x, y, z;
        cin >> x >> y >> z;
        set <int> :: iterator it=ms.lower_bound(x), ip;
        for(ip=it; ip!=ms.end(); ip++)
        {
            if(*ip>y)
                break;
            if(*ip!=z)
            {
                v.push_back(*ip);
                a[*ip]=z;
            }
        }
        for(auto it:v)
            ms.erase(it);
    }
    for(int i=1; i<=n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}