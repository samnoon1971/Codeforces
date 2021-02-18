#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
     int n;
     cin >> n;
     ll a[n];
     for(int i=0; i<n; i++)
     {
         cin >> a[i];
     }
     ll sum=1, cnt=a[0], k=1;
     for(int i=1; i<n; i++)
     {
         if(a[i]!=cnt)
         {
             cnt=a[i];
             k=1;
         }
         else
         {
             k++;
         }
         sum+=k;
     }
     cout << sum << endl;
     return 0;
}