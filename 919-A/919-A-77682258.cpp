#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    int n, m;
    cin >> n >> m;
    ld cost = INT_MAX;
    for(int i=0; i<n; i++)
    {
        ld x, y;
        cin >> x >> y;
        cost = min(cost, x/y);
    }
    cout << std::setprecision(9) << cost*m << endl;
}