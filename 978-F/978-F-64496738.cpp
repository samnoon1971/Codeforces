#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
int a[N], dx[N], dy[N], b[N], e[N];
vector <pair<int, int> > v;
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        e[i]=a[i];
        v.push_back({a[i], i});
    }
    sort(a+1, a+n+1);

    for(int i=1; i<=k; i++)
    {
        int x, y;
        cin >> x >> y;
        dx[i]=x;
        dy[i]=y;
    }
    for(auto i:v)
    {
        b[i.second] =  lower_bound(a+1, a+n+1, i.first)-a-1;
    }
    for(int i=1; i<=k; i++)
    {
        int x=dx[i], y=dy[i];
        if(e[x]>e[y])
        {
            b[x]--;
        }
        else if(e[x]<e[y])
        {
            b[y]--;
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}