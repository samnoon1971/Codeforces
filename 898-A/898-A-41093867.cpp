#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n, round;
    cin >> n;
    if(n%10 > 5)
        cout << n - (n%10) + 10 << endl;
    else
        cout << n - (n%10) << endl;

    return 0;
}