#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n >> m;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x<0)
          v.push_back(x);
    }
    int sum=0;
    sort(v.begin(), v.end());
    vector <int> :: iterator it;
    for(it=v.begin(); m && it!=v.end(); it++)
        {
            if(*it < 0)
                {
                    sum+=(*it);
                    m--;
                }
        }
    cout << abs(sum) << endl;
    return 0;
}