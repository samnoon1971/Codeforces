#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x=0, y=0;
    cin >> n;
    char c;
    for(int i=0; i<n; i++)
    {
        cin >> c;
        if(c=='L')
            x--;
        else if(c=='R')
            x++;
        else if(c=='U')
            y++;
        else
            y--;
    }
    cout << n-abs(x)-abs(y) << endl;
    return 0;
}