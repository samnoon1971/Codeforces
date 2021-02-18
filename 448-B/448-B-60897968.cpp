#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string &s, string &t)
{
    int n=s.size(), m=t.size();
    int i=0, j=0;
    while(i<n && j<m)
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return j==m;
}
int main()
{
    string s, t;
    cin >> s >> t;
    int n=s.size(), m=t.size();
    if(check(s, t))
    {
        cout << "automaton" << endl;
        return 0;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(check(s, t))
    {
        if(n==m)
            cout << "array" << endl;
        else
            cout << "both" << endl;
    }
    else
        cout << "need tree" << endl;
    return 0;
}