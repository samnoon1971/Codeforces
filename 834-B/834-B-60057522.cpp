#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, k;
    cin >> n >> k;
    set <char> ms;
    string s;
    cin >> s;
    multiset <char> mp;
    queue <char> mq;
    for(auto i:s)
    {
        mp.insert(i);
        mq.push(i);
    }
    int cnt=0;
    while(!mq.empty())
    {
        char c=mq.front();
        if(ms.find(c)==ms.end())
            cnt++;
        ms.insert(c);
        if(cnt>k)
            break;
        mp.erase(mp.find(c));
        if(mp.find(c)==mp.end())
            cnt--;
        mq.pop();
    }
    if(cnt>k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}