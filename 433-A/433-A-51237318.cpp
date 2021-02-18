#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m=0, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x==200)
            m++;
    }
    if(m==n)
    {
        if(m%2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else if(m==0)
    {
        if(n%2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
    {
        if((n-m)%2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}