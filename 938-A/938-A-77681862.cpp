#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isVowel(char c)
{
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y';
}
int main()
{
    int n;
    string s;
    cin >> n >> s;
    string k;
    for(int i=0; i<n; i++)
    {
        if(isVowel(s[i]))
        {
            if(k.empty())
                k+=s[i];
            else
            {
                int m = k.size() - 1;
                if(isVowel(k[m]) != true)
                    k+=s[i];
            }
        }
        else
        {
            k+=s[i];
        }
    }
    cout << k << endl;
    return 0;
}