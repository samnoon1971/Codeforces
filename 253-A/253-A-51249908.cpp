#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    int n, m;
    cin >> n >> m;
    char c, d;
    int x=0, y=0, z=0, sum=n+m;
    if(n>m)
    {
        c='B', d='G';
    }
    else
    {
        c='G', d='B';
    }
    while(n && m)
        {
            n--;
            m--;
            sum-=2;
            cout << c << d;
        }
    while(sum>0)
            {
                cout << c;
                sum--;
            }
    return 0;
}