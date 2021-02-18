#include <bits/stdc++.h>
using namespace std;
vector <int> val;
set <int> mark;
int main()
{
   vector<int>::iterator it;
   int n, k, m;
   cin >> n >> k;
   for(int i=0; i<n; i++)
   {
       cin >> m;
       int z = mark.size();
       mark.insert(m);
       if(mark.size()>z)
        {
            k--;
            if(k>=0)
            val.push_back(i+1);
        }
   }
   if(k>0)
    cout << "NO" << endl;
   else
   {
       cout << "YES" << endl;
       for(it=val.begin(); it!=val.end()-1; it++)
           cout << *it << " ";
       cout << *it << endl;
   }
   return 0;
}