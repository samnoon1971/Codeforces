#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<2*n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if(v[n]==v[n-1])
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}