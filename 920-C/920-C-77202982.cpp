#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
#define debug(x) std :: cout << x << endl
vector <int> adj[N];
int a[N], vis[N];
void dfs(int node, vector <int> & vec)
{
    if(vis[node])
        return;
    vis[node]++;
    vec.push_back(node);
    for(auto i:adj[node])
    {
        dfs(i, vec);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    for(int i=0; i<n-1; i++)
    {
        if(s[i] == '1')
        {
            adj[i].push_back(i+1);
            adj[i+1].push_back(i);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(adj[i].empty())
            continue;
        vector <int> vec, elements;
        dfs(i, vec);
        for(auto j:vec)
        {
            elements.push_back(a[j]);
        }
        sort(vec.begin(), vec.end());
        sort(elements.begin(), elements.end());
        int p = vec.size(), index = 0;
        while(index < p)
        {
            int pos = vec[index];
            a[pos] = elements[index++];
        }
    }
    if(is_sorted(a, a+n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}