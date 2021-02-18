#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int cnt=0, sum=0, x=0;
    vector <pair<int, int> > vec;
    for(int i=0; i<n; i++)
    {
        if(sum+a[i]==0)
        {
            if(!sum) continue;
            vec.push_back({x+1, i});
            x=i;
            sum=a[i];
        }
        else
        {
            sum+=a[i];
        }
    }
    if(sum==0)
    {
        cout << "NO" << endl;
        return 0;
    }
    vec.push_back({x+1, n});
    cout << "YES" << endl;
    cout << vec.size() << endl;
    for(auto i:vec)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}