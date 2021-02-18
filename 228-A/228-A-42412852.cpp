#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, x;
    cin >> a >> b >> c >> d;
    set<long long> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout << 4-s.size() << endl;
    return 0;
}