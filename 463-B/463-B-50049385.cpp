#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int a=0, b=0, c=0;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a+=b-x;
        if(a<0)
            {
                c+=-a;
                a=0;
            }
        b=x;
    }
    cout << c << endl;
    return 0;
}