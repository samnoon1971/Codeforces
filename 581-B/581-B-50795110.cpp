#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    ll a[n], m=0;
    for(int i=0; i<n; i++)
        cin >> a[i];
    stack <ll> s;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]<m)
        {
            s.push(m-a[i]+1);
        }
        else if(a[i]==m)
        {
            s.push(1);
        }
        else
        {
                s.push(0);
                m=a[i];
        }
    }
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}