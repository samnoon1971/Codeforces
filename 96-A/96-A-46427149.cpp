#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, x="1111111", y="0000000";
    cin >> s;
    if(s.find(x)!=std::string::npos || s.find(y)!=std::string::npos)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}