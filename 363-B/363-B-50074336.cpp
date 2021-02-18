#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int dp[n], ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];
    dp[0]=0;
    for(int i=0; i<k; i++)
        dp[0]+=ar[i];
    int pos=1, m=dp[0];
    for(int i=1; i<=n-k; i++)
    {
        dp[i]=dp[i-1]-ar[i-1]+ar[i+k-1];
        if(dp[i]<m)
        {
            m=dp[i];
            pos=i+1;
        }
    }
    cout << pos << endl;
    return 0;
}