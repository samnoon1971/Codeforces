#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long sum=0, x, temp=0;
    cin >> n;
    vector <long long> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector <long long> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
        {
            sum+=abs(temp-*it);
            temp=*it;
        }
    cout << sum << endl;
    return 0;
}