#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    multiset <string> ms;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        ms.insert(s);
    }
    multiset <int> :: iterator it;
    int cnt=0;
    while(!ms.empty())
    {
        int temp=count(ms.begin(), ms.end(), *ms.begin());
        if(temp>cnt)
            cnt=temp;
        ms.erase(*ms.begin());
    }
    cout << cnt << endl;
    return 0;
}