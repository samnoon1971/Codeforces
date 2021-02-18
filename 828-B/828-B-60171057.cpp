#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, m;
    cin >> n >> m;
    int sum=0;
    vector <int> r, c;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<m; j++)
        {
            if(s[j]=='B')
                {
                    sum++;
                    r.push_back(i);
                    c.push_back(j);
                }
        }
    }
    int rx=0, cx=0, ry=0, cy=0;
    if(!r.empty())
       {
           rx=*min_element(r.begin(), r.end()), ry=*max_element(r.begin(), r.end());
       }
    if(!c.empty())
       {
           cx=*min_element(c.begin(), c.end()), cy=*max_element(c.begin(), c.end());
       }
    int k=max(ry-rx+1, cy-cx+1);
    if(k>n || k>m)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << k*k-sum << endl;
    return 0;
}