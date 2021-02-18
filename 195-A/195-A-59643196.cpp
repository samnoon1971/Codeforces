#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int px=a*c-b*c, py=0;
    cout << ceil(px/(b+.0)) << endl;
    return 0;
}