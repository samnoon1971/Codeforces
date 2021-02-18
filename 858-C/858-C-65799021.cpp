#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e4+10;
int a[N];
bool isVowel(const char c)
{
    string s="aeiou";
    return count(s.begin(), s.end(), c);
}
int main()
{
    string s, k;
    cin >> s;
    vector <string> v;
    int n=s.size();
    for(int i=1; i<=n; i++)
    {

        if(isVowel(s[i-1]))
            {
                a[i]=0;
                k+=s[i-1];
            }
        else
        {
            a[i]=a[i-1]+1;
            if(a[i]>=3)
            {
                if(s[i-1]==s[i-2] && s[i-1]==s[i-3])
                    {
                        a[i]=a[i-1]+1;
                        k+=s[i-1];
                    }
                else
                {
                 v.push_back(k);
                 k.clear();
                 a[i]=1;
                 k=s[i-1];
                }
            }
            else
                k+=s[i-1];
        }
    }
    if(!k.empty())
        v.push_back(k);
    for(auto i:v)
        cout << i << " ";
    return 0;
}