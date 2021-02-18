#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    while(m--)
    {
        int x, y;
        char a, b;
        cin >> x >> y >> a >> b;
        x--;
        y--;
        for(int i=x; i<=y; i++)
        {
            if(s[i]==a)
                s[i]=b;
        }
    }
    cout << s << endl;
    return 0;
}