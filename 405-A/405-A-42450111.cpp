#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end()-1; it++)
        cout << *it << " ";
    cout << *it << endl;
    return 0;
}