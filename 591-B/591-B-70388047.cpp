#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char mark[26];
void init()
{
    for(char c='a'; c<='z'; c++)
        mark[c-'a'] = c;
}
int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    init();
    while(m--)
    {
      char x, y;
      cin >> x >> y;
      for(int i=0; i<26; i++)
      {
          if(mark[i]==x)
            mark[i]=y;
          else if(mark[i]==y)
            mark[i]=x;
      }
    }
    for(int i=0; i<n; i++)
    {
      s[i] = mark[s[i]-'a'];
    }
    cout << s << endl;
    return 0;
}