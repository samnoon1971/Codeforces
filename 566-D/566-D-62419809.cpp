#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
int parent[N];
int mark[N];
set <int> ms;
void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        parent[i]=i;
        mark[i]=1;
        ms.insert(i);
    }
}
int find_set(int v)
{
    if(v==parent[v])
        return v;
    parent[v]=find_set(parent[v]);
    return parent[v];
}
void mergeA(int a, int b)
{
    int x=find_set(a), y=find_set(b);
    if(x==y)
        return;
    if(mark[x]<mark[y])
    {
        parent[x]=y;
        mark[y]+=mark[x];
        mark[x]=0;
    }
    else
    {
        parent[y]=x;
        mark[x]+=mark[y];
        mark[y]=0;
    }

}
void mergeB(int a, int b)
{
    vector <int> v;
    set <int> :: iterator i=ms.lower_bound(a);
    while(i!=ms.end())
    {
        if(*i>=b)
            break;
        v.push_back(*i);
        i++;
    }
    for(auto i:v)
    {
        ms.erase(i);
    }
    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        mergeA(*it, *it+1);
    }
}
bool query(int a, int b)
{
    int x=find_set(a);
    int y=find_set(b);
    return x==y;
}
int main()
{
   int n, q;
   scanf("%d %d", &n, &q);
   init(n);
   while(q--)
   {
       int type, x, y;
       scanf("%d %d %d", &type, &x, &y);
       if(type==1)
       {
           mergeA(x, y);
       }
       else if(type==2)
       {
           mergeB(x, y);
       }
       else
       {
           if(query(x, y))
            printf("YES\n");
           else
            printf("NO\n");
        }
   }
   return 0;
}