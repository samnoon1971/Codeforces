#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   string s, m;
   cin >> s;
   int n=s.size(), k=1;
   for(int i=0; i<n; i++)
   {
       if(s[i]=='0' && k)
           k=0;
       else
        m+=s[i];
   }
   if(k)
    m=m.substr(0, n-1);
   cout << m << endl;
}