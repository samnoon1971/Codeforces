#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;
int a[N], b[N], c[N];
int main()
{
     int n;
     cin >> n;
     for(int i=1; i<=n; i++)
     {
         cin >> c[i];
     }
     a[1]=1;
     for(int i=2; i<=n; i++)
     {
         if(c[i]>c[i-1])
            a[i]=a[i-1]+1;
         else
            a[i]=1;
     }
     b[n]=1;
     for(int i=n-1; i>0; i--)
     {
         if(c[i]<c[i+1])
            b[i]=b[i+1]+1;
         else
            b[i]=1;
     }
     int res=0;
     for(int i=1; i<=n; i++)
     {
         if(c[i+1]-c[i-1]>1)
            res=max(res, a[i-1]+b[i+1]+1);
        else
            res=max(res, max(a[i-1], b[i+1])+1);

     }
     cout << res << endl;
     return 0;
}