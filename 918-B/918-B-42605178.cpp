#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector <pair <string, string> > mb;
    unordered_multimap <string, string> ma;
    string a, b;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        ma.insert(make_pair (b, a));
    }
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        mb.push_back(make_pair (b, a));
    }
    vector <pair <string, string> > :: iterator it=mb.begin();
    unordered_multimap <string, string> :: iterator ip;
    for(int i=0; i<m; i++)
    {
        string temp = it->first;
        temp = temp.substr(0, temp.size()-1);
        cout << it->second << " " << it->first << " #";
        ip = ma.find(temp);
        cout << ip->second << endl;
        it++;
    }
    return 0;
}