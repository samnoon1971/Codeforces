#include <bits/stdc++.h>
using namespace std;
int main()
{
    set <char> st;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
            st.insert(tolower(s[i]));
    if(st.size()==26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}