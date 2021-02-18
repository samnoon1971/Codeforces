#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2)
        cout << (n*n)/2 + 1 << endl;
    else
        cout << n*n/2 << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i+j)%2==0)
                cout << 'C';
            else
                cout << '.';
        }
        cout << endl;
    }
    return 0;
}