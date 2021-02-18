#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int sum = a+b+c+d+e;
    if(sum==0)
    {
        cout << -1 << endl;
        return 0;
    }
    if(sum%5==0)
    {
        cout << sum/5 << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}