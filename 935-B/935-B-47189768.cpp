#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    int x=0, y=0, c=0;
    char prev='C';
    cin >> n >> s;
    for(int i=0; i<n; i++)
    {

        if(x==y && prev==s[i])
            c++;
        if(s[i]=='U')
            y++;
        else
            x++;
        prev=s[i];
    }
    cout << c << endl;
    return 0;
}