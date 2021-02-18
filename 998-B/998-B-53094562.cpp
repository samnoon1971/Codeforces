#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, b;
    cin >> n >> b;
    int a[n], cx=0, cy=0;
    for(int i=0; i<n; i++)
        cin >> a[i];
    multiset <int> ms;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]%2)
           cx++;
        else cy++;
        if(cx==cy)
            ms.insert(abs(a[i]-a[i+1]));
    }
    int cnt=0;
    for(auto i:ms)
    {
        if(b-i<0)
            break;
        b-=i;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}