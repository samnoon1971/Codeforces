#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k=0, sum;
    cin >> n;
    vector <int> v;
    int a, b;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        sum=b-a+k;
        v.push_back(sum);
        k=sum;
    }
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}