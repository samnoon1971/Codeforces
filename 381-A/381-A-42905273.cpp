#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, cnt=1;
    cin >> n;
    list <int> a;
    int suma=0, sumb=0;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    while(!a.empty())
    {
        if(cnt%2)
        {
            if(a.back()>a.front())
                {
                suma+=a.back();
                a.pop_back();
                }
            else
            {
                suma+=a.front();
                a.pop_front();
            }
        }
        else
        {
            if(a.back()>a.front())
            {
                sumb+=a.back();
                a.pop_back();
            }
            else
            {
                sumb+=a.front();
                a.pop_front();
            }
        }
        cnt++;
    }
    cout << suma << " " << sumb << endl;
    return 0;
}