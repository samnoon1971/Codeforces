#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int px=a*c-b*c, py=0;
    for(int i=0; i<px; i+=b, py++);
    cout << py << endl;
    return 0;
}