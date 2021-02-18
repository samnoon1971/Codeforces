#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, a, b, sum=0;
    string s;
    cin >> n >> a >> b >> s;
    vector <int> v;
    int cnt=0;
    s+='0';
    for(int i=0; i<=n; i++)
    {
        if(s[i]!='.')
        {
            v.push_back(cnt);
            cnt=0;
        }
        else
            cnt++;
    }
    for(auto i:v)
    {
      if(a==0 && b==0)
        break;
       if(i%2)
       {
           if(a>b)
            a--;
           else
            b--;
           i--;
           sum++;
       }
       int px=min(i/2, a), py=min(i/2, b);
       a-=px;
       b-=py;
       sum+=px+py;
    }
    cout << sum << endl;
    return 0;
}