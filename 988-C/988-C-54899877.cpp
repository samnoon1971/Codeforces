#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct sequence
{
    int sum, row, col;
    sequence(int x, int y, int z)
    {
        sum=x;
        row=y;
        col=z;
    }
};
bool cmp(struct sequence s1, struct sequence s2)
{
    return s1.sum<s2.sum;
}
int main()
{
    int k;
    cin >> k;
    vector <sequence> v;
    for(int j=0; j<k; j++)
    {
        int n;
        cin >> n;
        int a[n], sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        for(int i=0; i<n; i++)
        {
            sequence s(sum-a[i], j+1, i+1);
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i].sum==v[i+1].sum && v[i].row!=v[i+1].row)
        {
            cout << "YES" << endl;
            cout << v[i].row << " " << v[i].col << endl;
            cout << v[i+1].row << " " << v[i+1].col << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}