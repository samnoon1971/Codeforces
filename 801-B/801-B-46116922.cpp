#include <bits/stdc++.h>
using namespace std;
int main()
{
     string a, b, c;
     cin >> a >> b;
     int k=a.size();
     for(int i=0; i<k; i++)
     {
         if(a[i]<b[i])
         {
             cout << -1 << endl;
             return 0;
         }
     }
     for(int i=0; i<k; i++)
     {
         c+=min(a[i], b[i]);
     }
     cout << c << endl;
     return 0;
}