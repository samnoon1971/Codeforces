#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n>=0)
        cout << n << endl;
    else
    {
        int x=n%10, y=n%100;
        y=y/10;
        n=n/100;
        int m=max(x, y);
        cout << n*10+m << endl;
    }
    return 0;
}