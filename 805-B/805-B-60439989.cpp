#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    string s="aabbaabb", k;
    int m=n/8;
    while(m)
    {
        k+=s;
        m--;
    }
    m=n%8;
    int i=0;
    while(m)
    {
        k+=s[i];
        i++;
    m--;
    }
    cout << k << endl;
    return 0;
}