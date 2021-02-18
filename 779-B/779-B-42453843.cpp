#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string n;
    cin >> n >> k;
    int a = count(n.begin(), n.end(), '0');
    if(k>a)
        cout << n.size()-1;
    else
    {
        int cnt=0;
        for(int i=n.size()-1; i>=0; i--)
        {
            if(n[i]=='0')
                cnt++;
            if(cnt==k)
            {
                cout << n.size()-i-k << endl;
                return 0;
            }
        }
    }
    return 0;
}