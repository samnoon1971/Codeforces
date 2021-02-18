#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n+1]={0};
    set <int> ms, vs;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        if(ms.find(x)==ms.end() && x<=n)
            {
                a[i]=x;
                ms.insert(x);
            }
    }
    for(int i=1; i<=n; i++)
    {
        if(ms.find(i)==ms.end())
        {
            vs.insert(i);
            ms.insert(i);
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i])
            cout << a[i] << " ";
        else
        {
            auto it=vs.begin();
            cout << *it << " ";
            vs.erase(it);
        }
    }
    return 0;
}