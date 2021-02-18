#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    multiset <int> ms, mp;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        ms.insert(x);
    }
    mp=ms;
    for(int i=0; i<n-1; i++)
    {
        cin >> x;
        ms.erase(ms.find(x));
    }
    int a = *ms.begin();
    ms=mp;
    ms.erase(ms.find(a));
    for(int i=0; i<n-2; i++)
    {
        cin >> x;
        ms.erase(ms.find(x));
    }
    int b = *ms.begin();
    cout << a << endl << b << endl;
    return 0;
}