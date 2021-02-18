#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int m=0;
    for(int i=0; i<n; i++)
    {
        int cnt=1, p=a[i], q=a[i];
        int x=i-1, y=i+1;
        while(x>=0)
        {
            if(a[x]>p)
                break;
            p=a[x];
            x--;
            cnt++;
        }
        while(y<n)
        {
            if(a[y]>q)
                break;
            q=a[y];
            y++;
            cnt++;
        }
        m=max(m, cnt);
    }
    cout << m << endl;
    return 0;
}