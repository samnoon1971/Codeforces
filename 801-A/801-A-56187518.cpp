#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s.substr(i, 2)=="VK")
        {
            s[i]='?';
            s[i+1]='?';
            cnt++;
        }
    }
    int k=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='V' && s[i+1]=='V')
               {
                   k=1;
                   break;
               }
    }
    if(!k)
    {
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]=='K' && s[i-1]=='K')
            {
                k=1;
                break;
            }
        }
    }
    cout << cnt+k << endl;
    return 0;
}