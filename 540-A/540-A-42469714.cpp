#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    string s, k;
    cin >> n >> s >> k;
    for(int i=0; i<n; i++)
    {
        int x = s[i]-48, y = k[i]-48;
        if((x-y) > 5)
            sum = sum + 10 - x + y;
        else if((y-x) > 5)
            sum = sum + 10 - y + x;
        else
            sum = sum + abs(x-y);
    }
    cout << sum << endl;
    return 0;
}