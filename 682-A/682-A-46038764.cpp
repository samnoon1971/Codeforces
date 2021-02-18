#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll n, m, sum=0, a=0, b=0, c=0, d=0, e=0;
    cin >> n >> m;
    for(int i=1; i<=m; i++)
    {
        if(i%5==1)
            a++;
        else if(i%5==2)
            b++;
        else if(i%5==3)
            c++;
        else if(i%5==4)
            d++;
        else
            e++;
    }
    for(int i=1; i<=n; i++)
    {
        int k=(5-i%5)%5;
        if(k==1)
            sum+=a;
        else if(k==2)
            sum+=b;
        else if(k==3)
            sum+=c;
        else if(k==4)
            sum+=d;
        else sum+=e;
    }
    cout << sum << endl;
    return 0;
}