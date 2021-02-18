#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    int n=s.size(), sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<=n-4; j++)
        {
            if(s.substr(j, 4)=="bear")
               {
                   sum+=n-j-3;
                   break;
               }
        }
    }
    cout << sum << endl;
    return 0;
}