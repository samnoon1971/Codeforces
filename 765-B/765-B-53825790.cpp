#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set <char> ms;
    int c[26]={0};
    char k='a';
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>k)
        {
            cout << "NO" << endl;
            return 0;
        }
        else if(s[i]==k)
        k++;
        ms.insert(s[i]);
        c[s[i]-'a']++;
    }
    for(int i=0; i<ms.size(); i++)
    {
        if(c[i]==0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}