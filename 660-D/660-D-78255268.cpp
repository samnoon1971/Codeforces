#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
        map <pair< int, int>, int > counter;
        int n;
        cin >> n;
        vector <pair<int, int> > vec(n);
        for(int i=0; i<n; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            vec[i] = {x, y};
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int cx = vec[i].first + vec[j].first;
                int cy = vec[i].second + vec[j].second;
                counter[{cx, cy}]++;
            }
        }
        int ans = 0;
        for(auto point:counter)
        {
            int x = point.second;
            ans += (x*(x-1))/2;
        }
        printf("%d\n", ans);
       return 0;
}