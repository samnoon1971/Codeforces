#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, x, y, z, sum=0;
    cin >> a >> b >> x >> y >> z;
    long long m = 2*x + y;
    long long n = y + 3*z;
    if(a<m)
        sum += m-a;
    if(b<n)
        sum += n-b;
    cout << sum << endl;
    return 0;
}