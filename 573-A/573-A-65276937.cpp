#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        while(a[i]%2==0)
            a[i]/=2;
        while(a[i]%3==0)
            a[i]/=3;
    }
    int m=a[0];
    for(int i=1; i<n; i++)
    {
        if(m!=a[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}