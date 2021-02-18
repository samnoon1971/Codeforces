#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int sum=n;
    for(int i=1; i<n; i++)
        sum+=i*(n-i);
    cout << sum << endl;
    return 0;
}