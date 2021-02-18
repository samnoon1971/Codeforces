#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> a, b, c;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x>0)
            a.push_back(x);
        else if(x<0)
            b.push_back(x);
        else
            c.push_back(x);
    }
    if(b.size()%2==0)
    {
        c.push_back(b.back());
        b.pop_back();
    }
    if(a.empty())
    {
        a.push_back(b.back());
        b.pop_back();
        a.push_back(b.back());
        b.pop_back();
    }
    vector <int> :: iterator it;
    cout << b.size();
    for(it=b.begin(); it!=b.end(); it++)
        cout << " " << *it;
    cout << endl << a.size();
    for(it=a.begin(); it!=a.end(); it++)
        cout << " " << *it;
    cout << endl << c.size();
    for(it=c.begin(); it!=c.end(); it++)
        cout << " " << *it;
    cout << endl;
    return 0;
}