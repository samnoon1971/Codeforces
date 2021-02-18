#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int x, a=0, b=0;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x>0)
            a+=x;
        else
            b+=x;
    }
    cout << a-b << endl;
    return 0;
}