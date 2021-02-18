#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a=0, b=0, c=0;
    char ch;
    for(int i=0, ch=s[0]; i<s.size(); ++i)
    {
        if(s[i] != ch   &&   s[i] < ch)
        {
            cout << "NO" << endl;
            return 0;
        }
        else if(s[i] != ch && s[i] > ch)
            ch = s[i];

    }
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i]=='a')
            a++;
        else if(s[i]=='b')
            b++;
        else if(s[i]=='c')
            c++;
    }
    if(((a==c) || (b==c)) && (a>0 && b>0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}