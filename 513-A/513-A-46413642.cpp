#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x, y, val=1;
    cin >> a >> b >> x >> y;
    while(a && b)
    {
        if(val)
           a--;
        else
            b--;
        if(val==1) val=0;
        else val=1;
    }
    if(a==0)
        cout << "Second" << endl;
    else
        cout << "First" << endl;
    return 0;
}