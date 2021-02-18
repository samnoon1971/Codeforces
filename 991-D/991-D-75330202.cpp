#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 110;
int ans;
string s[2];
int main()
{
    cin >> s[0] >> s[1];
    int n = s[0].size();
    for(int i=1; i<=n; i++)
    {
        if(s[0][i]=='0')
        {
            if(s[0][i-1]==s[0][i]  && s[1][i-1]==s[0][i])
            {
                ans++;
                s[0][i] = s[1][i-1] = s[0][i-1] = '#';
            }
            else if(s[0][i-1]==s[0][i] && s[1][i]==s[0][i])
            {
                ans++;
                s[0][i] = s[0][i-1] = s[1][i] = '#';
            }
            else if(s[1][i]==s[0][i] && s[1][i-1]==s[0][i])
            {
                ans++;
                s[0][i] = s[1][i] = s[1][i-1] = '#';
            }
        }
        else
        {
            if(s[0][i-1]=='0' && s[1][i]=='0' && s[1][i-1]=='0')
            {
                ans++;
                s[0][i-1] = s[1][i] = s[1][i-1] = '#';
            }
        }
    }
    cout << ans << endl;

}