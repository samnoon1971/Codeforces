#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int limit = 1e6+10;
int f[limit];
int g[limit][10];
int calc(int k)
{
    int prod=1;
    while(k)
        {
            if(k%10)
              prod=prod*(k%10);
            k/=10;
        }
    if(prod<10)
        return prod;
    return calc(prod);
}

int main()
{
    int q;
    cin >> q;
    for(int i=1; i<limit; i++)
    {
        if(i<10)
            f[i]=i;
        else
            f[i]=f[calc(i)];
    }
    for(int i=1; i<limit; i++)
    {
        for(int j=1; j<10; j++)
        {
            g[i][j]=g[i-1][j];
        }
        g[i][f[i]]++;
    }
    while(q--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << g[y][z]-g[x-1][z] << endl;
    }
    return 0;
}