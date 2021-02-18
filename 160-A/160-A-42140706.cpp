#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    vector <int> vec;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }

    int sum=0, cnt=0, coin=0;
    sum = accumulate(vec.begin(), vec.end(), sum);
    vector <int> :: iterator it;
    sort(vec.rbegin(), vec.rend());
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        if(cnt>sum) break;
        else
        {
            cnt+= *it;
            sum-= *it;
            coin++;
        }
    }
    cout << coin << endl;
    return 0;
}