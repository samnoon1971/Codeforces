#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ca=0, cb=0;
    for(int i=0; i<s.size(); i++)
        if(s[i]=='o')
            ca++;
        else if(s[i]=='-')
            cb++;
    if(!ca)
        cout << "YES" << endl;
    else if(cb%ca==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}