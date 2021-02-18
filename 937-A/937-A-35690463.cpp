#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, c, d=0, m=0;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
     cin >> c;
     v.push_back(c);
    }
    sort(v.begin(), v.end());

    for(vector <int>::iterator it=v.begin(); it!=v.end(); ++it)
    {
        if(*it!=m)
        {
            d++;
            m=*it;
        }
    }
    cout << d << endl;
    return 0;
}