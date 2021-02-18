#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt=5;
    for(int i=0; i<s.size() && cnt; i++)
    {
        if(s[i]=='h' && cnt==5)
            cnt--;
        else if(s[i]=='e' && cnt==4)
            cnt--;
        else if(s[i]=='l' && cnt==3 || s[i]=='l' && cnt==2)
            cnt--;
        else if(s[i]=='o' && cnt==1)
            cnt--;
    }
    if(cnt)
        cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}