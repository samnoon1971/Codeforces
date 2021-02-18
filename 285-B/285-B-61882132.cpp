#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, s, t;
    cin >> n >> s >> t;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(s==t)
        {
            cout << i << endl;
            return 0;
        }
        s=a[s-1];
    }
    cout << -1 << endl;
    return 0;
}