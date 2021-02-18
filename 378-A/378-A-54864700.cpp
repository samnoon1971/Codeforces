#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a, b;
    cin >> a >> b;
    int x=0, y=0, z=0;
    for(int i=1; i<=6; i++)
    {
        int c=abs(a-i)-abs(b-i);
        if(c<0)
            x++;
        else if(c>0)
            y++;
        else z++;
    }
    cout << x << " " << z << " " << y << endl;
    return 0;
}