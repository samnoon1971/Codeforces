#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 101
vector <pair<int, int> > vec[N];
bool vis[N];

int main()
{
    int n, m;
    cin >> n >> m;
    set <int> ms;
    for(int i=0; i<m; i++)
    {
       int a, b, c;
       cin >> a >> b >> c;
       ms.insert(c);
       vec[a].push_back({b, c});
       vec[b].push_back({a, c});
    }
    int q;
    cin >> q;

    while(q--)
    {
     int a, b;
     cin >> a >> b;
     int sum=0;
     for(auto i:ms)
     {
        int cnt=0;
        queue <int> mq;
        memset(vis, false, sizeof vis);
        mq.push(a);
        while(!mq.empty())
        {
            int s=mq.front();
            mq.pop();
            for(auto j:vec[s])
            {
                if(vis[j.first] || j.second!=i)
                    continue;
                if(j.first==b)
                {
                  cnt=1;
                  break;
                }
                vis[j.first]=true;
                mq.push(j.first);
            }
            if(cnt)
            {
                sum++;
                break;
            }
        }
     }
       cout << sum << endl;
    }
    return 0;
}