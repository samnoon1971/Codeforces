#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int x=0, y=0;
   string a=s.substr(0, n), b=s.substr(n, n);
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   for(int i=0; i<n; i++)
   {
       if(a[i]<b[i])
        x++;
       else if(b[i]<a[i])
        y++;
   }
   if(x==n || y==n)
    cout << "YES" << endl;
   else
    cout << "NO" << endl;
   return 0;
}