#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x, y;
vector <pair<int, int> > v(3);
int main()
{
    for(int i=0; i<3; i++)
    {
        cin >> v[i].first >> v[i].second;
        x+=v[i].first;
        y+=v[i].second;
    }
    cout << 3 << endl;
    for(auto i:v)
    {
        cout << x-2*i.first << " " << y-2*i.second << endl;
    }
    return 0;
}