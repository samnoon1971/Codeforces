#include <bits/stdc++.h>
using namespace std;
vector <int> vp;
bool cp(int n)
{
  for(int i=3; i<=sqrt(n); i++)
    if(n%i==0) return false;
  return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vp.push_back(2);
    for(int i=3; i<=m; i+=2)
       if(cp(i))
        vp.push_back(i);
    vector <int> :: iterator it;
    for(it=vp.begin(); it!=vp.end(); it++)
        if(*it==n && *(it+1)==m)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}