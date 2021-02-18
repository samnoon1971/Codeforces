#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char board[4][4];
bool ok(int x, int y)
{
    return x>=0 && x<4 && y>=0 && y<4 && board[x][y]!='o';
}
int main()
{
    string s;
    for(int i=0; i<4; i++)
    {
        cin >> s;
        for(int j=0; j<4; j++)
        {
            board[i][j]=s[j];
        }
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(board[i][j]=='o')
                continue;
            multiset <char> mp;
            if(ok(i-1, j) && ok(i+1, j))
            {
                mp={board[i][j], board[i-1][j], board[i+1][j]};
                if(mp.count('x')>=2)
                  {
                    cout << "YES" << endl;
                    return 0;
                  }
            }
            if(ok(i-1, j-1) && ok(i+1, j+1))
            {
                mp={board[i-1][j-1], board[i+1][j+1], board[i][j]};
                if(mp.count('x')>=2)
                  {
                    cout << "YES" << endl;
                    return 0;
                  }
            }
            if(ok(i-1, j+1) && ok(i+1, j-1))
            {
                mp={board[i-1][j+1], board[i+1][j-1], board[i][j]};
                if(mp.count('x')>=2)
                  {
                    cout << "YES" << endl;
                    return 0;
                  }
            }
            if(ok(i, j+1) && ok(i, j-1))
            {
                mp={board[i][j], board[i][j+1], board[i][j-1]};
                if(mp.count('x')>=2)
                  {
                    cout << "YES" << endl;
                    return 0;
                  }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}