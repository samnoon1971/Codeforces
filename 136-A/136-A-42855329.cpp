#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    multimap <int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        mp.insert(make_pair(x, i+1));
    }

    multimap <int, int> :: iterator it;
    for(int i=1; i<=n; i++)
    {
        if(mp.find(i)!=mp.end())
        {
            it=mp.find(i);
            cout << (*it).second << " ";
        }
    }
    cout << endl;
    return 0;
}