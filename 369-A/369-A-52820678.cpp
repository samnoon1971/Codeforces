#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            if(m)
                m--;
            else
                cnt++;
        }
        else
        {
            if(k)
                k--;
            else
            {
                if(m)
                    m--;
                else cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}