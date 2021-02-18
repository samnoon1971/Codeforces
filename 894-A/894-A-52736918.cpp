#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int cnt=count(s.begin(), s.end(), 'Q');
    int sum=0, x=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='Q')
            x++;
        else if(s[i]=='A')
                sum=sum+x*(cnt-x);
    }
    cout << sum << endl;
    return 0;
}