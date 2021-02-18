#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a[n+1], b[n+1];
    bool p[n+1], q[n+1];
    memset(p, false, sizeof(p));
    memset(q, false, sizeof(q));
    for(ll i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
        if(i<n/2)
        {
            p[i]=true;
            q[i]=true;
        }
    }
    for(ll i=0, j=0, k=0; i<n; i++)
    {
        if(a[j]<b[k])
            p[j++]=true;
        else
            q[k++]=true;
    }
    for(ll i=0; i<n; i++)
        cout << p[i];
    cout << endl;
    for(ll i=0; i<n; i++)
        cout << q[i];
    cout << endl;
    return 0;
}