#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <string> v = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
int main()
{
    int n;
    string s;
    cin >> n >> s;
    for(auto j:v)
    {
       string k=j;
       if(k.size()!=n)
        continue;
       int cx=0;
       for(int i=0; i<n; i++)
       {
           if(k[i]!=s[i])
           {
               if(s[i]!='.')
               {
                   cx++;
                   break;
               }
           }
       }
       if(cx)
        continue;
       cout << j << endl;
       return 0;
    }
}