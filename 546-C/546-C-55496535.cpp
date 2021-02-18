#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    deque <int> a, b;
    int k1, k2, x;
    cin >> k1;
    for(int i=0; i<k1; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    cin >> k2;
    for(int i=0; i<k2; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    int cnt=0;
    while(!a.empty() && !b.empty())
    {
        if(cnt>n*n*n)
        {
            cout << -1 << endl;
            return 0;
        }
        int cx=a.front(), cy=b.front();
        if(cx>cy)
        {
            a.push_back(cy);
            a.push_back(cx);
        }
        else
        {
            b.push_back(cx);
            b.push_back(cy);
        }
        a.pop_front();
        b.pop_front();
        cnt++;
    }
    if(a.empty())
        cout << cnt << " " << 2 << endl;
    else
        cout << cnt << " " << 1 << endl;
    return 0;
}