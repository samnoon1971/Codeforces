#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, s;
    cin >> n >> s;
    vector <pair<int,  int> > v;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    //cout << "DEBUG1" << endl;
    int rem=-1;
    for(auto i:v)
    {
        //cout << "DEBUG2" << endl;
        if(100*i.first+i.second<=100*s)
        {
            //cout << "DEBUG3" << endl;
            if(!i.second)
                rem = max(rem, 0);
            else
                rem = max(rem, 100-i.second);
        }
    }
    //cout << "DEBUG4" << endl;
    cout << rem << endl;
    return 0;
}