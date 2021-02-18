#include <bits/stdc++.h>
using namespace std;
int main()
{
        int a, b, n;
        cin >> a >> b >> n;
        int k=__gcd(a, n), t=1;
        while(n)
        {
            if(t)
            {
                n-=k;
                k=__gcd(b, n);
                t=0;
            }
            else
            {
                n-=k;
                k=__gcd(a, n);
                t=1;
            }
        }
        cout << t << endl;
        return 0;
}