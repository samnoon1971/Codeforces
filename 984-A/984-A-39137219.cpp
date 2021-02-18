#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec;
    int n, k;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(), vec.end());
    vector <int> :: iterator it;
    it = vec.begin()+vec.size()/2;
    if(vec.size()%2==1)
        cout << *it << endl;
    else
        cout << *(it-1) << endl;
    return 0;
}