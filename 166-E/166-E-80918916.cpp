#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
const ll SIZE = 4;
typedef vector < vector <ll> > matrix;

matrix mult(matrix A, matrix B)
{
    matrix res(SIZE, vector <ll> (SIZE, 0));
    for(ll i=0; i<SIZE; i++)
    {
        for(ll j=0; j<SIZE; j++)
        {
            for(ll k=0; k<SIZE; k++)
            {
                res[i][j] += (A[i][k] * B[k][j])%MOD;
                res[i][j] %= MOD;
            }
        }
    }
    return res;
}
matrix expo(matrix Mat, ll n)
{
    if(n==1)
        return Mat;
    matrix res = expo(Mat, n/2);
    res = mult(res, res);
    if(n%2)
        res = mult(res, Mat);
    return res;
}
ll solve(ll n)
{
    if(n==1)
        return 0;
    ll T[] = {0, 1, 1, 1};
    matrix F(SIZE, vector <ll>(SIZE, 0));
    F = {{0, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 1}, {1, 1, 1, 0}};
    F = expo(F, n-1);
    ll res = 0;
    for(ll i=0; i<SIZE; i++)
    {
        res = (res + (F[0][i] * T[i])%MOD)%MOD;
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}