#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int bx, by, px, py, qx, qy;
    cin >> bx >> by >> px >> py >> qx >> qy;
    int cnt=max(max(px, py), max(qx, qy));
    if(cnt>max(bx, by))
    {
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0; i<4; i++)
    {
    if(i==0)
        swap(px, py);
    else if(i==1)
        swap(qx, qy);
    else if(i==2)
        swap(px, py);
    else
        swap(qx, qy);
    if(bx>=(px+qx))
    {
        if(by>=max(py, qy))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    if(bx>=(py+qy))
    {
        if(by>=max(px, qx))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    if(by>=(px+qx))
    {
        if(bx>=max(py, qy))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    if(by>=(py+qy))
    {
        if(bx>=max(px, px))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    }
    cout << "NO" << endl;
    return 0;
}