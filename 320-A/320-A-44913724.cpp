#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k=0;
    if(s[0]!='1')
    {
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4')
            k++;
        else
            k=0;
        if(k==3 || (s[i]!='4' && s[i]!='1'))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}