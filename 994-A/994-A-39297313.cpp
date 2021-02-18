#include <bits/stdc++.h>
using namespace std;
vector <int> vec, tec;
int main()
{
    int n, m, x;
    cin >> n >> m;
    for(int i=0; i<n; i++)
{
    cin >> x;
    vec.push_back(x);
}
    for(int i=0; i<m; i++)
    {
        cin >> x;
        tec.push_back(x);
    }
    vector <int> :: iterator ip;

    for(vector <int>::iterator it=vec.begin();
    it!=vec.end(); it++)
    {
        for(ip=tec.begin(); ip!=tec.end(); ip++)
        {
            if(*it==*ip)
                cout << *it << endl;
        }

    }
    return 0;
}