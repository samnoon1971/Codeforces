#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct laptop
{
    int speed, ram, hdd, cost, id;
    bool ok;
    laptop(int a, int b, int c, int d, int e)
    {
        ok=true;
        speed=a, ram=b, hdd=c, cost=d, id=e;
    }
};
int main()
{
    int n;
    cin >> n;
    vector <laptop> v;
    for(int i=0; i<n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        laptop pc(a, b, c, d, i+1);
        v.push_back(pc);
    }
    vector <pair<int, int> > p;
    vector <laptop> :: iterator it, ip;
    for(it=v.begin(); it!=v.end(); it++)
    {
        if(it->ok!=true)
            continue;
        for(ip=v.begin(); ip!=v.end(); ip++)
        {
            if(it==ip)
               continue;
            if(it->speed<ip->speed && it->ram<ip->ram && it->hdd<ip->hdd)
            {
                it->ok=false;
                break;
            }
        }
        if(it->ok)
            p.push_back(make_pair(it->cost, it->id));
    }
    pair<int, int> data={INT_MAX, -1};
    for(auto i:p)
    {
        if(i.first<data.first)
        {
            data.first=i.first;
            data.second=i.second;
        }
    }
    cout << data.second << endl;
    return 0;
}