#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, x, sum=0, cnt=0;
    cin >> k;
    vector <int> v;
    for(int i=0; i<12; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), [](const int& x, const int& y){return x>y;});
    for(auto i:v)
    {
        if(sum<k)
            {
                cnt++;
                sum+=i;
            }
        else break;
    }
    if(sum>=k)
       cout << cnt << endl;
    else
        cout << -1 << endl;
    return 0;
}