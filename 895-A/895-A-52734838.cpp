#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int m=0;
        for(int j=i; j<n; j++)
        {
            m+=a[j];
            v.push_back(abs(360-2*m));
        }
    }
    cout << *min_element(v.begin(), v.end()) << endl;
    return 0;
}