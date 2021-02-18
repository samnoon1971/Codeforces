#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int sum=0, cx=INT_MAX, cy=INT_MIN;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x>0)
            sum+=x;
        if(x%2)
        {
            if(x>=0)
                cx=min(cx, x);
            else
                cy=max(cy, x);
        }
    }
    if(sum%2)
        cout << sum << endl;
    else
    {
        if(cx!=INT_MAX && cy!=INT_MIN)
            sum-=min(cx, -cy);
        else
        {
            if(cx==INT_MAX)
                sum-=-cy;
            else
                sum-=cx;
        }
        cout << sum << endl;
    }
    return 0;
}