#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec;
    int n, k;
    int x;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int temp=0;
    for(int i=0; i<n; i++)
        if(k%a[i]==0 && temp<a[i])
            temp = a[i];
        cout << k/temp << endl;
        return 0;

}