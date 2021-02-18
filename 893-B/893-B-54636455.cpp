#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    for(int i=n; i>=0; i--)
    {
        if(n%i==0)
        {
            int x=__builtin_ctz(i);
            int y=__builtin_popcount(i);
            int z=0, p=i;
            while(p)
            {
                z++;
                p/=2;
            }
            if(x+y==z && x+1==y)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
}