#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x, p, q, s=INT_MAX;
    vector <int> a, b;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    for(auto i:a) for(auto j:b)
        if(i==j) s=min(j, s);
    p = *min_element(a.begin(), a.end());
    q = *min_element(b.begin(), b.end());
    cout << min(min(p, q)*10+max(p, q), s) << endl;
    return 0;
}