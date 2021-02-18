#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e6+10;
struct vertex
{
    int a, b, c, t;
    void get(int x, int y, int z)
    {
        a=x, b=y, c=z;
    }

};
vertex t[4*MAXN];
char s[MAXN];
void build(char* s, int p, int tl, int tr) {
    vertex v;
    v.get(0, 0, 0);
    if(tl==tr)
    {
        if(s[tl]=='(')
        {
           v.b+=2;
        }
        else
        {
            v.c+=2;
        }
        t[p].get(v.a, v.b, v.c);
        return;
    }
    vertex x, y;
    int mid=(tl+tr)/2;
    build(s, 2*p, tl, mid);
    build(s, 2*p+1, mid+1, tr);
    x=t[2*p], y=t[2*p+1];
    int q=min(x.b, y.c);
    v.a=x.a+y.a+q;
    v.b=x.b+y.b-q;
    v.c=x.c+y.c-q;
    t[p].get(v.a, v.b, v.c);
}


vertex sum(int p, int tl, int tr, int l, int r) {
    vertex v;
    v.get(0, 0, 0);
    if (l > r)
        {
            return v;
        }
    if (l == tl && r == tr) {
        return t[p];
    }
    int tm = (tl + tr) / 2;
    vertex x, y;
    x = sum(p*2, tl, tm, l, min(r, tm));
    y = sum(p*2+1, tm+1, tr, max(l, tm+1), r);
    int t=min(x.b, y.c);
    v.a=x.a+y.a+t;
    v.b=x.b+y.b-t;
    v.c=x.c+y.c-t;
    return v;
}

int main()
{
    scanf("%s", s);
    int n = strlen(s);
    build(s, 1, 0, n-1);
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        x--, y--;
        int ans = sum(1, 0, n-1, x, y).a;
        printf("%d\n", ans);
    }
    return 0;
}