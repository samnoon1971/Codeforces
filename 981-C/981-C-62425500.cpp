#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;
int din[N];
set <int> ms;
vector <pair<int, int> > adj;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        din[u]++;
        din[v]++;
        ms.insert(u);
        ms.insert(v);
    }
    int cnt=0, src=-1;
    for(auto i:ms)
    {
        if(din[i]>2)
            {
                src=i;
                cnt++;
            }
    }
    if(cnt>1)
    {
        cout << "No" << endl;
        return 0;
    }
    else if(cnt==1)
    {
        cout << "Yes" << endl;
        for(auto i:ms)
        {
            if(i==src) continue;
            if(din[i]!=1) continue;
            adj.push_back({src, i});
        }
        cout << adj.size() << endl;
        for(auto i:adj)
          cout << i.first << " " << i.second << endl;
        return 0;
    }
    for(auto i:ms)
    {
        if(din[i]==1)
        {
            src=i;
            break;
        }
    }
    cout << "Yes" << endl;
    for(auto i:ms)
    {
        if(din[i]==1 && src!=i)
            adj.push_back({i, src});
    }
    cout << adj.size() << endl;
    for(auto i:adj)
        cout << i.first << " " << i.second << endl;
    return 0;
}