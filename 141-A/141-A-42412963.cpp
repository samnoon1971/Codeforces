#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset <char> a, b;
    string x, y, z;
    cin >> x >> y >> z;
    for(int i=0; i<x.size(); i++)
        a.insert(x[i]);
    for(int i=0; i<y.size(); i++)
        a.insert(y[i]);
    for(int i=0; i<z.size(); i++)
        b.insert(z[i]);
    if(a.size()!=b.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    multiset <char> :: iterator it1, it2;
    for(it1=a.begin(), it2=b.begin();
    it1!=a.end(); it1++, it2++)
    {
        if(a.count(*it1)!=b.count(*it2))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}