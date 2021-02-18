#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, val=0;
    cin >> n >> k;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    for(int i=1; i<n; i++)
    {
        int x = max(0, k-ar[i]-ar[i-1]);
        val+=x;
        ar[i]+=x;
    }
    cout << val << endl;
    for(int i=0; i<n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}