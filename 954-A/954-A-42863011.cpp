#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    string s;
    cin >> n >> s;
    string a="RU", b="UR";
    for(int i=0; i<n-1; i++)
    {
        if((s.at(i)=='R' && s.at(i+1)=='U')||(s.at(i)=='U' && s.at(i+1)=='R'))
        {
            cnt++;
            i++;
        }
    }
    cout << n-cnt << endl;
    return 0;
}