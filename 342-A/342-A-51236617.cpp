#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int a=0, b=0, c=0, d=0, e=0;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x==1)
            a++;
        else if(x==2)
            b++;
        else if(x==4)
            c++;
        else if(x==6) d++;
        else if(x==3) e++;
    }
     int cx=0, cy=0, cz=0;
    while(a && b && c)
            {
                a--, b--, c--;
                cx++;
            }
    while(a && b && d)
            {
                cy++;
                a--, b--, d--;
            }
    while(a && d && e)
        {
            cz++;
            a--, d--, e--;
        }
    if(3*(cx+cy+cz)!=n)
            cout << -1 << endl;
    else
    {
        while(cx--)
            cout << 1 << " " << 2 << " " << 4 << endl;
        while(cy--)
            cout << 1 << " " << 2 << " " << 6 << endl;
        while(cz--)
            cout << 1 << " " << 3 << " " << 6 << endl;
    }
    return 0;
}