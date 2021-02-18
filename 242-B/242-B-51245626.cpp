#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x, y;
    cin >> n;
    vector <pair<int, int> > v;
    ll mp=INT_MAX, mq=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
        mp=min(x, mp);
        mq=max(y, mq);
    }
    ll cnt=1;
    for(auto i:v)
    {
        if(i.first==mp && i.second==mq)
        {
            cout << cnt << endl;
            return 0;
        }
        cnt++;
    }
    cout << -1 << endl;
    return 0;
}