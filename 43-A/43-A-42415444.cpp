#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset <string> goal;
    string s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        goal.insert(s);
    }
    multiset <string> :: iterator it=goal.begin();
    int a = goal.count(*it);
    if(2*a<goal.size())
    {
    goal.erase(*it);
    it = goal.begin();
    }
    cout << *it << endl;
    return 0;
}