#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k, a, b, sum=0;
    cin >> n >> k >> a >> b;
    if(k==1)
    {
        cout << (n-1)*a << endl;
        return 0;
    }
    while(n!=1)
    {
        if(n<k)
        {
            cout << sum + (n-1)*a << endl;
            return 0;
        }
        else if(n%k)
        {
            sum+=(n%k)*a;
            n-=n%k;
        }
        else
        {
            sum+=min(b, a*(n-n/k));
            n/=k;
        }
    }
    cout << sum << endl;
    return 0;
}