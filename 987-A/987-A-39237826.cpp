#include <bits/stdc++.h>
using namespace std;
vector<string> st1;
map<string, string> m;
int main()
{
    string s;
    int t;
    m.insert(pair <string, string> ("purple", "Power"));
    m.insert(pair <string, string> ("green", "Time"));
    m.insert(pair <string, string> ("blue", "Space"));
    m.insert(pair <string, string> ("orange", "Soul"));
    m.insert(pair <string, string> ("red", "Reality"));
    m.insert(pair <string, string> ("yellow", "Mind"));
    cin >> t;
    while(t--)
    {
        cin >> s;
        st1.push_back(s);
    }
    map <string, string> :: iterator id;
    vector <string> :: iterator it;
    for(it=st1.begin(); it!=st1.end(); it++)
    {
        id = m.find(*it);
        if(id!=m.end())
            m.erase(id);
    }
    map <string, string> :: const_iterator i;
    cout <<  m.size() << endl;
    for(i=m.begin(); i!=m.end(); i++)
        cout <<(*i).second  << endl;
    return 0;
}