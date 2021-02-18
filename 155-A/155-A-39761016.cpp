#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int cnt=0;
    vector <int> :: iterator it=v.begin();
    int mn = *it;
    int mx = *it;
    for( ; it!=v.end(); it++)
    {
        if(*it>mx)
            {
                mx = *it;
                cnt++;
            }
        else if(*it<mn)
        {
            mn = *it;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}