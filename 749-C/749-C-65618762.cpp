#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
string s;
queue <int> qx, qy;
int main()
{
    cin >> n >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='D')
                qx.push(i);
        else
            qy.push(i);
    }
    while(!qx.empty() && !qy.empty())
    {
        if(qx.front()<qy.front())
            {
                qx.push(qx.front()+n);
                qy.pop();
                qx.pop();
            }
        else
            {
                qy.push(qy.front()+n);
                qy.pop();
                qx.pop();
            }
    }
    if(qx.empty())
        cout << 'R' << endl;
    else
        cout << 'D' << endl;
    return 0;
}