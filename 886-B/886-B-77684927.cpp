#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
int main()
{
    int n;
    cin >> n;
    set <int> ms;
    vector <int> vec(n);
    for(int i=n-1; i>=0; i--)
    {
        cin >> vec[i];
        ms.insert(vec[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(ms.size()==1)
            break;
        if(ms.find(vec[i])!=ms.end())
        {
            ms.erase(vec[i]);
        }
    }
    cout << *ms.begin() << endl;
    return 0;
}