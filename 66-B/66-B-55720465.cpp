#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   int n;
   cin >> n;
   int a[n], m=1;
   for(int i=0; i<n; i++)
    cin >> a[i];
   for(int i=0; i<n; i++)
   {

           int cnt=1;
           if(a[i]>=a[i-1] && i>0)
           {
            int x=i-1, k1=a[i];
            while(a[x]<=k1 && x>=0)
            {
                cnt++;
                k1=a[x];
                x--;
            }
           }
           if(a[i]>=a[i+1] && i<n-1)
           {
            int y=i+1, k2=a[i];
            while(a[y]<=k2 && y<n)
            {
                cnt++;
                k2=a[y];
                y++;
            }
           }
           m=max(m, cnt);
    }
   cout << m << endl;
   return 0;
}