#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s, k;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        int n=k.size();
        if(n<2)
            k+=s[i];
        else if(n==2)
        {
            if(k[n-1]==k[n-2] && k[n-1]==s[i])
                continue;
            k+=s[i];
        }
        else
        {
            if((k[n-1]==k[n-2] && k[n-1]==s[i]) || (k[n-1]==s[i] && k[n-2]==k[n-3]))
                continue;
            k+=s[i];
        }
    }
    cout << k << endl;
    return 0;
}