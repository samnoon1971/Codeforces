#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, k;
    cin >> w;
    vector <int> x, y, z;
    for(int i=0; i<w; i++)
    {
        cin >> k;
        if(k==1)
            x.push_back(i+1);
        else if(k==2)
            y.push_back(i+1);
        else
            z.push_back(i+1);
    }
    int a = min(x.size(), min(y.size(), z.size()));
    cout << a << endl;
    int i=0;
    while(i<a)
    {
        cout << x[i] << " " << y[i] << " " << z[i] << endl;
        i++;
    }
    return 0;
}