#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k, q;
    cin >> n >> k >> q;
    ll ar[n];
    for(ll i=0; i<n; i++)
        cin >> ar[i];
    priority_queue <pair<ll, ll> > pq;

    for(ll i=0; i<q; i++)
    {
        ll x, y;
        cin >> x >> y;
        y--;
        if(x==1)
        {
            pq.push({ar[y], y});
        }
        else
        {
           unordered_set <ll> ms;
           ll cnt=0;
           while(cnt!=k && !pq.empty())
           {
             ll p = pq.top().second;
             if(ms.find(p)!=ms.end())
                pq.pop();
             else
             {
             ms.insert(pq.top().second);
             pq.pop();
             cnt++;
             }
           }
           if(ms.find(y)!=ms.end())
            cout << "YES" << endl;
           else
            cout << "NO" << endl;
            for(auto i:ms)
           {
               pq.push({ar[i], i});
           }
        }
    }
    return 0;
}