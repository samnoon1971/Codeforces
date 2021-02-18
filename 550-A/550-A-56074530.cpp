#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int cx=0, cy=0, cz=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(i+3<s.size())
        {
            if(s.substr(i, 3)=="ABA" || s.substr(i, 3)=="BAB")
            {
                cz++;
                i+=2;
                continue;
            }
        }
        if(s.substr(i, 2)=="AB")
        {
            cx++;
            i++;
        }
        else if(s.substr(i, 2)=="BA")
        {
            cy++;
            i++;
        }
    }
    if(cx && cy)
        cout << "YES" << endl;
    else if(cz>1)
        cout << "YES" << endl;
    else if((cx && cz) || (cz && cy))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}