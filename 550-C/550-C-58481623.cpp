#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void calc(int n)
{
    if(n%8)
        return;
    cout << "YES" << endl << n << endl;
    exit(0);
}
int main()
{
    string s;
    cin >> s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        string a=s.substr(i, 1);
        int p=stoi(a);
        calc(p);
        for(int j=i+1; j<n; j++)
        {
            string b=s.substr(j, 1);
            int q=stoi(b);
            calc(q);
            for(int k=j+1; k<n; k++)
            {
                string c=s.substr(k, 1);
                int p1=stoi(a+b+c);
                int p2=stoi(a+c);
                int p3=stoi(b+c);
                int p4=stoi(a+b);
                calc(p1);
                calc(p2);
                calc(p3);
                calc(p4);
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}