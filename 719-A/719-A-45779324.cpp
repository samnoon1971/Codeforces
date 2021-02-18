#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, k=0;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector <int> :: iterator it=v.end()-1;
    if(*it==0)
      cout << "UP" << endl;
    else if(*it==15)
        cout << "DOWN" << endl;
    else
    {
        if(v.size()==1)
            cout << -1 << endl;
        else if(*it-*(it-1)>0)
            cout << "UP" << endl;
        else
            cout << "DOWN" << endl;
    }
    return 0;
}