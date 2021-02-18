#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector <pair<string, string> > v;
    for(int i=0; i<n; i++)
    {
        int k=1;
        string a, b;
        cin >> a >> b;
        for(vector <pair<string, string> > :: iterator it=v.begin(); it!=v.end() && !v.empty(); it++)
        {
            if(it->second==a)
            {
                k=0;
                it->second = b;
                break;
            }
        }
        if(k || v.empty())
            v.push_back(make_pair(a, b));
    }
    cout << v.size() << endl;
    for(auto i:v)
        cout << i.first << " " << i.second << endl;
    return 0;
}