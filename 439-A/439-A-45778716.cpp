#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, x, k=0;
    cin >> n >> d;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        k+=x;
    }
    int cnt = k+(n-1)*10;
    if(cnt>d)
        cout << -1 << endl;
    else
        cout << (d-k)/5 << endl;
    return 0;
}