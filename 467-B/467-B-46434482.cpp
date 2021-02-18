#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, x, sum=0;
    cin >> n >> m >> k;
    vector <int> v;
    for(int i=0; i<m+1; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int pos = *v.rbegin();
    v.pop_back();
    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        if(__builtin_popcount(*it^pos)<=k)
            sum++;
    }
    cout << sum << endl;
    return 0;
}