#include <bits/stdc++.h>
using namespace std;
int main()
{
   string a, b;
   cin >> a >> b;
   int x=0, y=0, n=a.size(), m=b.size();
   for(int i=0; i<a.size(); i++, x++)
   {
       if(a[i]!='0')
            break;
   }
   for(int i=0; i<b.size(); i++, y++)
   {
       if(b[i]!='0')
           break;
   }
   if(x==n && y==m)
   {
       cout << '=' << endl;
       return 0;
   }
   a=a.substr(x, n-x);
   b=b.substr(y, m-y);
   if(a.size()>b.size())
    cout << '>' << endl;
   else if(a.size()<b.size())
    cout << '<' << endl;
   else
   {
       for(int i=0; i<a.size(); i++)
       {
           if(a[i]>b[i])
           {
               cout << '>' << endl;
               return 0;
           }
           else if(a[i]<b[i])
           {
               cout << '<' << endl;
               return 0;
           }
       }
       cout << '=' << endl;
   }
   return 0;
}