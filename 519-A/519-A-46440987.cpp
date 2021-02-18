#include <bits/stdc++.h>
using namespace std;
int main()
{
        string s, k;
        for(int i=0; i<8; i++)
        {
            cin >> s;
            k+=s;
        }
        int sumx=9*count(k.begin(), k.end(), 'Q')
            + 5*count(k.begin(), k.end(), 'R')
            + 3*count(k.begin(), k.end(), 'B')
            + 3*count(k.begin(), k.end(), 'N')
            + count(k.begin(), k.end(), 'P');
        int sumy=9*count(k.begin(), k.end(), 'q')
            + 5*count(k.begin(), k.end(), 'r')
            + 3*count(k.begin(), k.end(), 'b')
            + 3*count(k.begin(), k.end(), 'n')
            + count(k.begin(), k.end(), 'p');
        if(sumx>sumy)
            cout << "White" << endl;
        else if(sumx<sumy)
            cout << "Black" << endl;
        else
            cout << "Draw" << endl;
        return 0;
}