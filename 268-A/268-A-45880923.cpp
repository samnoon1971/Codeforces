#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, k=0;
    cin >> n;
    int x[n], y[n];
    for(int i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(x[i]==y[j] && i!=j)
                k++;
        }
    }
    cout << k << endl;
    return 0;
}