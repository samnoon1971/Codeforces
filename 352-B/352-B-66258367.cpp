#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;
vector <int> mark[N];
int main()
{
    int n;
    cin >> n;
    set <int> ms;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
        mark[x].push_back(i);
    }
    vector <pair<int, int> > v;
    for(auto i:ms)
    {
        if(mark[i].size()==1)
        {
            v.push_back({i, 0});
            continue;
        }
        sort(mark[i].begin(), mark[i].end());
        vector <int> :: iterator it=mark[i].begin();
        int cx=0, cnt=*(it+1)- *it;
        for(it=mark[i].begin(); it!=mark[i].end()-1; it++)
        {
            if(*(it+1)- *it!=cnt)
            {
                cx++;
                break;
            }
        }
        if(!cx)
        {
            v.push_back({i, cnt});
        }
    }
    cout << v.size() << endl;
    for(auto i:v)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}