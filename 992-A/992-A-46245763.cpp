#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    set <int> s;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    if(s.count(0))
        s.erase(0);
    x=s.size();
    cout << x << endl;
    return 0;
}