#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 200001
vector <int> vec[N];
bool vis[N];
int col[N];
void dfs(int n, set <int> &ms, multiset <int> &mp)
{
    if(vis[n])
        return;
    vis[n]=true;
    ms.insert(col[n]);
    mp.insert(col[n]);
    for(auto i:vec[n])
    {
        dfs(i, ms, mp);
    }
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++)
    {
        cin >> col[i];
    }
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i])
            continue;
        multiset <int> mp;
        set <int> ms;
        dfs(i, ms, mp);
        int cnt=0;
        for(auto i:ms)
        {
            int p=mp.count(i);
            cnt=max(p, cnt);
        }
        int q=mp.size()-cnt;
        sum+=q;
    }
    cout << sum << endl;
}