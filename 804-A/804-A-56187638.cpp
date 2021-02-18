#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, k=0;
    cin >> n;
    if(n%2)
        k=n/2;
    else
        k=n/2-1;
    cout << k << endl;
    return 0;
}