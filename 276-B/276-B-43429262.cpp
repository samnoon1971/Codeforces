#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt=0;
    multiset <char> ms;
    set <char> ns;
    for(int i=0; i<s.size(); i++)
    {
        ms.insert(s[i]);
        ns.insert(s[i]);
    }
    set <char> :: iterator it;
    for(it=ns.begin(); it!=ns.end(); it++)
    {
        if(count(ms.begin(), ms.end(), *it)%2)
            cnt++;
    }
    if(cnt==0 || cnt==1)
        cout << "First" << endl;
    else if(cnt%2==0)
        cout << "Second" << endl;
    else
        cout << "First" << endl;
    return 0;
}