#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans;
    cin >> n;
    if(n%2)
        ans = (n-1)/2-n;
    else
        ans = n/2;
    cout << ans << endl;
    return 0;
}