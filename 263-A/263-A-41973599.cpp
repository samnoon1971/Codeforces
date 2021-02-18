#include <bits/stdc++.h>

using namespace std;
int main()
{
    int m[5][5];
    int x;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
        {
            cin >> m[i][j];
            if(m[i][j]==1)
            {
                x = abs(2-i) + abs(2-j);
            }
        }
    cout << x << endl;
    return 0;
}