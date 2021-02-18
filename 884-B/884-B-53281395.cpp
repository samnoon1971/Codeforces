#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n], sum=0;
    for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
    if(sum+n!=x+1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}