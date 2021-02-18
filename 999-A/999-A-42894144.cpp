#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> a;
    int n, k, x, cnt=0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    while(!a.empty())
    {
        if(a.front()<=k)
        {
            a.pop_front();
            cnt++;
        }
        else if(a.back()<=k)
        {
            a.pop_back();
            cnt++;
        }
        else
            break;
    }
    cout << cnt << endl;
    return 0;
}