#include <bits/stdc++.h>
using namespace std;
int isV(char c)
{
    if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' ||
        c=='i' || c=='o' || c=='O' || c=='U' || c=='u' || c=='Y' || c=='y')
            return -1;
    return 1;
}
int main()
{
    vector <char> c;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(isV(s[i])==1)
        {
            c.push_back('.');
            if(isupper(s[i]))
                s[i]+=32;
            c.push_back(s[i]);
        }
    }
    vector <char> :: iterator it;
    for(it=c.begin(); it!=c.end(); it++)
        cout << *it;
    cout << endl;
    return 0;
}