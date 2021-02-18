#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>='a' && a[i]<='z')
            a[i] = a[i]-32;
        if(b[i]>='a' && b[i]<='z')
            b[i] = b[i]-32;
    }
    if(lexicographical_compare(a.begin(), a.end(), b.begin(), b.end()))
       cout << -1 << endl;
    else
    {
        if(lexicographical_compare(b.begin(), b.end(), a.begin(), a.end()))
            cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;

}