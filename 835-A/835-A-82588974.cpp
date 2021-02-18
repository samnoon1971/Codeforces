#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    ll cx = 2*t1 + s * v1, cy = 2*t2 + s * v2;
    if(cx < cy)
    {
        cout << "First" << endl;
    }
    else if(cx > cy)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}