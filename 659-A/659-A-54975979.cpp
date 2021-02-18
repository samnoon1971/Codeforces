#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int cnt=abs(b);
    if(b<0)
    {
        while(cnt--)
        {
            if(a==1)
                a=n;
            else a--;
        }
    }
    else
    {
        while(cnt--)
        {
            if(a==n)
                a=1;
            else a++;
        }
    }
    cout << a << endl;
    return 0;
}