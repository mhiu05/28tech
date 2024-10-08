#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;

struct matrix
{
    ll a[2][2];
    friend matrix operator*(matrix x, matrix y)
    {
        matrix c;
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                c.a[i][j] = 0;
                for (int k = 0; k < 2; ++k)
                {
                    c.a[i][j] += x.a[i][k] * y.a[k][j];
                    c.a[i][j] %= mod;
                }
            }
        }
        return c;
    }
};

matrix binpow(matrix a, ll k)
{
    if (k == 1)
        return a;
    matrix x = binpow(a, k / 2);
    if (k % 2 == 0)
        return x * x;
    return x * x * a;
}

int main()
{
    faster();
    matrix x;
    x.a[0][0] = 1;
    x.a[0][1] = 1;
    x.a[1][0] = 1;
    x.a[1][1] = 0;
    ll n;
    cin >> n;
    matrix result = binpow(x, n);
    cout << result.a[1][0];
    return 0;
}