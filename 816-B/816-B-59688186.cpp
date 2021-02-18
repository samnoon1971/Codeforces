#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 200001
int a[N];

int main()
{
    int n, k, q;
    scanf("%d %d %d", &n, &k, &q);
    for(int i=0; i<n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        a[x]++;
        a[y+1]--;
    }
    for(int i=2; i<N; i++)
    {
        a[i]+=a[i-1];
    }
    for(int i=1; i<N; i++)
    {
        if(a[i]<k)
            a[i]=0;
        else
            a[i]=1;
    }
    for(int i=2; i<N; i++)
    {
        a[i]+=a[i-1];
    }
    while(q--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", a[y]-a[x-1]);
    }
    return 0;
}