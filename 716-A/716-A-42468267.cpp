#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x, cnt=0;
    cin >> n >> m;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector <int> :: iterator it;
    for(it=v.begin()+1; it!=v.end(); it++)
        if(*it - *(it-1)<=m)
            cnt++;
        else cnt=0;
    cout << cnt+1 << endl;
    return 0;
}