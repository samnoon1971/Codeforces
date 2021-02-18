#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector <pair<int, int> > vec;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        vec.push_back({x, 1});
        vec.push_back({y, 2});
    }
    sort(vec.begin(), vec.end());
    int sum=0;
    for(auto i:vec)
    {
        if(i.second==1)
            sum++;
        else
            sum--;
        if(sum>2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}