#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    string s, t, p;
    cin >> n >> m >> t >> s;
    int sum=INT_MAX, cnt=0;
    for(int i=0; i<m-n+1; i++)
    {
        cnt=0;
        string k=s.substr(i, n);
        for(int j=0; j<n; j++)
        {
            if(k[j]!=t[j])
                cnt++;
        }
        if(cnt<sum)
        {
            p=k;
            sum=cnt;
        }
    }
    cnt=0;
    for(int i=0; i<n; i++)
    {
        if(p[i]!=t[i])
            cnt++;
    }
    cout << cnt << endl;
    for(int i=0; i<n; i++)
    {
        if(p[i]!=t[i])
            cout << i+1 << " ";
    }
    return 0;
}