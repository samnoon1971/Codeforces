#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int cnta = count(s.begin(), s.end(), '1');
    int cntb = count(s.begin(), s.end(), '0');
    cout << abs(cnta-cntb) << endl;
    return 0;
}