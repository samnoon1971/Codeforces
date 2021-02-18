#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt=0, a = s.size();
    for(int i=0; i<a/2; i++)
    {
        if(s[i]!=s[a-i-1])
            cnt++;
    }
    if((cnt==0 || cnt==1) && a%2!=0)
        cout << "YES" << endl;
    else if(cnt==1 && a%2==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}