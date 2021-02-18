#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
int main()
{
    int n;
    cin >> n;
    int x = 0, y = 0;
    for(int i=0; i<n; i++)
    {
        int p;
        cin >> p;
        if(p==1)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    int sum = min(x, y);
    x -= sum;
    sum += x/3;
    cout << sum << endl;
    return 0;
}