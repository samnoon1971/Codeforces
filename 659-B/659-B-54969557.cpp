#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct player
{
    string s;
    int y;
    player(string a, int c)
    {
        s=a;
        y=c;
    }
};
bool cmp(struct player p1, struct player p2)
{
    return p1.y>p2.y;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector <player> v[n];
    for(int i=0; i<n; i++)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        player p(s, b);
        v[a-1].push_back(p);
    }
    for(int i=0; i<m; i++)
    {
        sort(v[i].begin(), v[i].end(), cmp);
    }
    for(int i=0; i<m; i++)
    {
        if(v[i].size()==2)
        {
            int k=0;
            string s[2];
            for(auto j:v[i])
            {
                s[k++]=j.s;
            }
            cout << s[0] << " " << s[1] << endl;
        }
        else
        {
            string s[3];
            int ar[3];
            int k=0;
            for(auto j:v[i])
            {
                if(k==3)
                    break;
                s[k]=j.s;
                ar[k]=j.y;
                k++;
            }
            if(ar[1]==ar[2])
            {
                cout << '?' << endl;
            }
            else
            {
                cout << s[0] << " " << s[1] << endl;
            }
        }
    }
    return 0;
}