#include <bits/stdc++.h>
using namespace std;
int main()
{
    int left, right, both, cnt=0, val=0;
    cin >> left >> right >> both;
    while(left && right)
    {
        cnt+=2;
        left--;
        right--;
    }if(left) val = left;
    else if(right) val = right;
    while(val && both)
        {
            cnt+=2;
            val--;
            both--;
        }
        if(both%2==0)
                cnt+=(both);
            else cnt+=(both-1);
    cout << cnt << endl;
    return 0;
}