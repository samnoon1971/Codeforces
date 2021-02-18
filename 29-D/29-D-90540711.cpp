#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;

#define          samnoon                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          ld                     long double
#define          ull                    unsigned long long int
#define          pii                    pair < int, int>
#define          pll                    pair < ll, ll>
#define          MOD                    1000000007
#define          ff                     first
#define          ss                     second
#define          pb                     push_back
#define          eb                     emplace_back
#define          sc                     scanf
#define          pf                     printf
#define          scin(x)                scanf("%d",&(x))
#define          scin2(x,y)             scanf("%d %d",&(x),&(y))
#define          scin3(x,y,z)           scanf("%d %d %d",&(x),&(y),&(z))
#define          scln(x)                scanf("%lld",&(x))
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))
#define          scln3(x,y,z)           scanf("%lld %lld %lld",&(x),&(y),&(z))
#define          min3(a,b,c)            min(a,min(b,c))
#define          min4(a,b,c,d)          min(d,min(a,min(b,c)))
#define          max3(a,b,c)            max(a,max(b,c))
#define          max4(a,b,c,d)          max(d,max(a,max(b,c)))
#define          ms(a,b)                memset(a,b,sizeof(a))
#define          mp                     make_pair
#define          gcd(a, b)              __gcd(a,b)
#define          lcm(a, b)              ((a)*(b)/gcd(a,b))
#define          input                  freopen("input.txt","rt", stdin)
#define          output                 freopen("output.txt","wt", stdout)
#define          PI                     acos(-1.0)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Max(v)                 *max_element(all(v))
#define          Min(v)                 *min_element(all(v))
#define          Upper(c,x)             (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)             (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)              (X).erase(unique(all(X)),(X).end())
#define          no                     cout << "NO" << endl ;
#define          yes                    cout << "YES" << endl ;
#define          segment_tree           int Lnode = node << 1 , Rnode = Lnode + 1 , mid = ( b + e ) >> 1 ;
#define          Count(C, x)             count(C.begin(), C.end(), x)
///sum accumulate( v.begin(), v.begin() + k, 0LL )///bool operator < ( const Node& p ) const{ return cost < p.cost ; }
///priority_queue<int,vector<int>,greater<int> >pq;///std::set<ll, std::greater<ll> > Set;///string str = "abcdefghijklmnopqrstuvwxyz";///string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
///string s = bitset<64>( n ).to_string() ; ll val =  bitset< 64 >( s ).to_ullong() ;

///--------------Graph Moves--------------------------------------
const int fx[] = {+1,-1,+0,+0}; const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move ///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move ///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

/** Debugging Tool **/
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
///

///--------------------**********----------------------------------
const ll N = 310;
ll dis[N][N], mark[N][N], cnt[N], graph[N][N];
void init(ll v)
{
    for(ll i=0; i<v; i++)
    {
        for(ll j=0; j<v; j++)
        {
            dis[i][j] = graph[i][j];
            if(graph[i][j] == LONG_MAX)
            {
                mark[i][j] = -1;
            }
            else
            {
                mark[i][j] = j;
            }
        }
    }
}

void constructPath(ll u, ll v, vector <ll> &path)
{
    if(mark[u][v] == -1)
     return;
    while(u != v)
    {
        u = mark[u][v];
        path.push_back(u);
    }
}
void floydWarshall(ll v)
{
    for(ll k=0; k<v; k++)
    {
        for(ll i=0; i<v; i++)
        {
            for(ll j=0; j<v; j++)
            {
                if(dis[i][k] == LONG_MAX || dis[k][j] == LONG_MAX)
                {
                    continue;
                }
                if(dis[i][j] > dis[i][k] + dis[k][j])
                {
                    mark[i][j] = mark[i][k];
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
}

void solve()
{
      ll n;
      cin >> n;
      for(ll i=0; i<=n; i++)
      {
          for(ll j=0; j<=n; j++)
          {
              graph[i][j] = LONG_MAX;
          }
      }
      for(ll i=0; i<n-1; i++)
      {
          ll u, v;
          cin >> u >> v;
          graph[u][v] = 1;
          graph[v][u] = 1;
          cnt[u]++;
          cnt[v]++;
      }
      vector <ll> vec;
      for(ll i=2; i<=n; i++)
      {
          if(cnt[i] == 1)
          {
              ll x;
              cin >> x;
              vec.push_back(x);
          }
      }
      init(n + 1);
      floydWarshall(n + 1);
      ll src = 1;
      vector <ll> ans;
      ans.push_back(src);
      for(auto node:vec)
      {
          constructPath(src, node, ans);
          src = node;
      }
      constructPath(src, 1, ans);
      if(ans.size() > 2 * n - 1)
      {
          cout << -1 << endl;
        return;
      }
      for(auto node:ans)
      {
          cout << node << " ";
      }
      cout << endl;

}
int main()
{
    samnoon;
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
      solve();
    }
    return 0;
}