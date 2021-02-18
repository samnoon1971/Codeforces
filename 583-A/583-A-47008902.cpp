#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, cnt=1;
    vector <pair <int, int> > v;
    cin >> n;
    for(int i=0; i<n*n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    set <int> ms, ns, ps;
    vector <pair <int, int> > :: iterator it;
    for(it=v.begin(); it!=v.end(); it++, cnt++)
    {
        if(ms.find(it->second)==ms.end() && ps.find(it->first)==ps.end())
         {
             ns.insert(cnt);
             ps.insert(it->first);
             ms.insert(it->second);
         }
    }
    for(auto i:ns)
        cout << i << " ";
    cout << endl;
    return 0;
}