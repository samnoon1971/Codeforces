#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string a, b;
    cin >> a >> b;
    int n=a.size();
    vector <int> pos;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
            pos.push_back(i);
    }
    if(pos.size()%2)
    {
        cout << "impossible" << endl;
        return 0;
    }
    int k=pos.size()/2;
    for(int i=0; i<n; i++)
    {
        if(b[i]!=a[i] && k)
        {
            k--;
            b[i]=a[i];
        }
    }
    cout << b << endl;
    return 0;
}