#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int m=n/2, cnt=n;
    while(m>=0)
    {
        string a=s.substr(0, m), b=s.substr(m, m);
        if(a==b)
        {
            cnt=min(cnt, n-m+1);
            break;
        }
        m--;
    }
    cout << cnt << endl;
    return 0;
}