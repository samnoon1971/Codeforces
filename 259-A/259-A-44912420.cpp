#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> vs;
    string s;
    for(int i=0; i<8; i++)
    {
        cin >> s;
        vs.push_back(s);
    }
    string w="WBWBWBWB", b="BWBWBWBW";
    for(auto i:vs)
    {
        if(i!=w && i!=b)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}