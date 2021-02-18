#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, x;
    cin >> n >> c;
    vector <int> v, vm;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end()-1; it++)
    {
        int temp = *it - *(it+1) - c;
        if(temp<0)
            temp=0;
        vm.push_back(temp);
    }
    int mx = *max_element(vm.begin(), vm.end());
    cout << mx << endl;
    return 0;
}