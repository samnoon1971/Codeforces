#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
vector <int> vec[N];
bool vis[N];
void check(bool &flag, int x)
{
    if(flag && vec[x].size()!=2)
        flag=false;
    for(auto i:vec[x])
    {
        if(vis[i])
            continue;
        vis[i]=true;
        check(flag, i);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i])
            continue;
        vis[i]=true;
        bool flag=true;
        check(flag, i);
        if(flag)
           cnt++;
    }
    cout << cnt << endl;
    return 0;
}