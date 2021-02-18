#include <bits/stdc++.h>
using namespace std;
multimap <int, int> mp;
int main()
{
    int s, n, x, y;
    cin >> s >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        mp.insert({x, y});
    }
    for(auto it:mp)
        if(s>it.first)
            s+=it.second;
        else
            {
                cout << "NO" << endl; exit(false);
            }
    cout << "YES" << endl;
    return 0;
}