#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    if(n%2==0)
    {
        x = n/2;
        cout << x << endl;
        for(int i=0; i<x-1; i++)
        {
            cout << 2 << " ";
        }
        cout << 2 << endl;
        return 0;
    }
    else
    {
        n-=3;
        x = n/2;
        if(x==0)
        {
            cout << 1 << endl;
            cout << 3 << endl;
            return 0;
        }
        cout << x+1 << endl;
        for(int i=0; i<x; i++)
            cout << 2 << " ";
        cout << 3 << endl;
        return 0;
    }
    return 0;
}