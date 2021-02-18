#include <bits/stdc++.h>
using namespace std;
#define mx 1000
int main()
{
    int n, a, b;
    cin >> n;
    int cnt=mx, sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        cnt=min(cnt, b);
        sum+=cnt*a;
    }
    cout << sum << endl;
    return 0;
}