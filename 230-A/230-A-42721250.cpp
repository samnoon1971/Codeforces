#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, x, y;
    cin >> s >> n;
    multimap <int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        mp.insert(make_pair(x, y));
    }
    int flag=0;
    multimap <int, int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(s>(*it).first)
            s+=(*it).second;
        else
        {
            flag++;
            break;
        }
    }
    if(flag!=0)
        cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}