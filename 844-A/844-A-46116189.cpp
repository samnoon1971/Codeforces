#include <bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     int k;
     cin >> s >> k;
     set <char> ms;
     for(int i=0; i<s.size(); i++)
     {
         ms.insert(s[i]);
     }
     if(s.size()<k)
        cout << "impossible" << endl;
     else
        {
            if(ms.size()<k)
                cout << k-ms.size() << endl;
            else
                cout << 0 << endl;
        }
     return 0;
}