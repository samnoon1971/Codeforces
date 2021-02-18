#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct rs
{
    string s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    string s;
    rs k[n];
    int cnt=0;
    unordered_multimap <string, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(mp.find(s)==mp.end())
        {
            k[cnt].s=s;
            k[cnt].id=1;
            mp.insert(make_pair(s, cnt));
            cnt++;
            cout << "OK" << endl;
        }
        else
        {
            int p=mp.find(s)->second;
            int x=k[p].id;
            k[p].id++;
            cout << k[p].s << x << endl;
        }
    }
    return 0;
}