#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e4+10;
bool a[N];
int main()
{
     int n;
     cin >> n;
     for(int i=0; i<n; i++)
     {
         int x;
         cin >> x;
         a[x]=1;
     }
     for(int i=1; i<N; i++)
     {
         if(a[i])
            continue;
         cout << i << endl;
         break;
     }
     return 0;
}