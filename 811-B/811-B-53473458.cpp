#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m, x;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    while(m--)
    {
        int l, r, cnt=0;
        scanf("%d %d %d", &l, &r, &x);
        l--;
        r--;
        x--;
        for(int i=l; i<=r; i++)
        {
            if(a[i]<a[x])
                cnt++;
        }
        if(cnt == x-l)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}