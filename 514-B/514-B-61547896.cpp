#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    set <pair<int, int> > ms;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        x-=a;
        y-=b;
        int p=__gcd(x, y);
        x/=p, y/=p;
        ms.insert({x, y});
    }
    cout << ms.size() << endl;
    return 0;
}