#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp=0;
    cin >> n;

    while(n--)
    {
        int s, d;
        cin >> s >> d;
        for(int i=s, j=0; ; j++)
        {
            int k = i + j*d;
            if(k>temp)
            {
                temp = k;
                break;
            }
        }
    }
    cout << temp << endl;
    return 0;
}