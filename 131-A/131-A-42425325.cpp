#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            x++;
    }
    if(x==s.size() || (x==s.size()-1 && (s[0]>='a' && s[0]<='z')))
    {
        for(int i=0; i<s.size(); i++)
        {
            if(islower(s[i]))
                s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;

}