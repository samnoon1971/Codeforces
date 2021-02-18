#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(c) std :: cout << "ERR :: " << c << endl
const int N = 1e5+10;
int dp[2];
char s[N];
bool check(int n, int k, int m)
{
    int ans = INT_MAX;
    memset(dp, 0, sizeof dp);
    for(int i=0; i<m; i++)
    {
      dp[s[i]-'a']++;
    }
    if(k>=min(dp[0], dp[1]))
        return true;
    for(int i=m; i<n; i++)
    {
        dp[s[i]-'a']++;
        dp[s[i-m]-'a']--;
        if(k>=min(dp[0], dp[1]))
            return true;
    }
    return false;
}

int main()
{
    int n, k;
    scanf("%d %d %s", &n, &k, s);
    int i = 0, j = n, ans = 0;
    while(i<=j)
    {
        int mid = i + (j-i)/2;
        if(check(n, k, mid))
        {
            //debug(-1);
            ans = max(ans, mid);
            i = mid+1;
        }
        else
        {
            //debug(1);
            j = mid-1;
        }
    }
    printf("%d\n", ans);
    return 0;

}