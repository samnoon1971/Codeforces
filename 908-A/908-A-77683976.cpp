#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e4+10;
bool check(char c)
{
    string s = "aeiou13579";
    return s.find(c)!=-1;
}
int main()
{
   string s;
   cin >> s;
   int n = s.size(), sum = 0;
   for(int i=0; i<n; i++)
   {
       if(check(s[i]))
        sum++;
   }
   cout << sum << endl;
   return 0;
}