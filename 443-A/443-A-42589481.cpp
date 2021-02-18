#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    std::getline(cin, s);
    set <int> ms;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            ms.insert(s[i]);
    }
    cout << ms.size() << endl;
    return 0;
}