#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e4+10;
ll f[N], a[N];
void initFibo()
{
    f[1] = f[2] = a[1] = a[2] = 1;
    for(int i=3; i<N; i++)
    {
        f[i] = f[i-1] + f[i-2];
        if(f[i]>=N)
            break;
        a[f[i]]++;
    }
}
int main()
{
   int n;
   cin >> n;
   initFibo();
   string s;
   for(int i=1; i<=n; i++)
   {
       if(a[i])
        s+='O';
       else
        s+='o';
   }
   cout << s << endl;
   return 0;
}