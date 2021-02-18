#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    set <int> ms;
    int a[n], b[n];
    for(int i=0; i<n; i++)
        {
            cin >> a[i];
            ms.insert(a[i]);
        }
    for(int i=0; i<n; i++)
        {
            cin >> b[i];
            ms.insert(b[i]);
        }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int x=a[i]^b[j];
            if(ms.find(x)!=ms.end())
                cnt++;
        }
    }
    if(cnt%2)
        cout << "Koyomi" << endl;
    else
        cout << "Karen" << endl;
    return 0;
}