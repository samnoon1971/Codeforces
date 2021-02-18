#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, x, y, z=0;
    cin >> n >> x;
    vector <int> v;
    for(int i=0; i<n; i++)
        {
            cin >> y;
            v.push_back(y);
        }
    sort(v.begin(), v.end());
    while(v[(n-1)/2]!=x)
    {
        v.push_back(x);
        z++;
        n++;
        sort(v.begin(), v.end());
    }
    cout << z << endl;
    return 0;
}