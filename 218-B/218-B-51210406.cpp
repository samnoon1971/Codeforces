#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    priority_queue <int> a, b;
    for(int i=0; i<m; i++)
        {
            int x;
            cin >> x;
            a.push(x);
            b.push(-x);
        }
    int x=0, y=0, sumx=0, sumy=0;
    while(x<n)
    {
        int s=a.top();
        a.pop();
        sumx+=s;
        if(s-1!=0)
        a.push(s-1);
        x++;
    }
    while(y<n)
    {
        int s=-b.top();
        b.pop();
        sumy+=s;
        if(s-1!=0)
        b.push(1-s);
        y++;
    }
    cout << sumx << " " << sumy << endl;
    return 0;
}