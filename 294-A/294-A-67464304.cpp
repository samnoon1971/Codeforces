#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 101;
int a[N];

int main()
{
   int n;
   cin >> n;
   for(int i=1; i<=n; i++)
   {
       cin >> a[i];
   }
   int q;
   cin >> q;
   while(q--)
   {
       int x, y;
       cin >> x >> y;
       if(x>1)
       {
           a[x-1] += y-1;
       }
       if(x<n)
       {
           a[x+1] += a[x]-y;
       }
       a[x] = 0;
   }
   for(int i=1; i<=n; i++)
   {
       cout << a[i] << " ";
   }
   return 0;
}