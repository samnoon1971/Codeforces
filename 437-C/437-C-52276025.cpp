#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int c[n];
    for(int i=0; i<n; i++)
        cin >> c[i];
    vector <int> v[n];
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x-1].push_back(y-1);
    }
    int sum=0;
    bool mark[n]={false};
    for(int i=0; i<n; i++)
    {
        if(mark[i])
            continue;
        mark[i]=true;
        for(vector <int> :: iterator j=v[i].begin(); j!=v[i].end(); j++)
        sum+=min(c[i], c[*j]);
    }
    cout << sum << endl;
    return 0;
}