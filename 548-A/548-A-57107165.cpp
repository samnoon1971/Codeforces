#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPal(const string &s)
{
    int n=s.size();
    for(int i=0; i<n/2; i++)
        if(s[i]!=s[n-i-1])
        return false;
    return true;
}
int main()
{
    std::ios::sync_with_stdio(false);
    string s;
    int k;
    cin >> s >> k;
    int n=s.size();
    if(n%k)
    {
        cout << "NO" << endl;
        return 0;
    }
    int m=n/k;
    for(int i=0; i<n; i+=m)
    {
        if(!isPal(s.substr(i, m)))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}