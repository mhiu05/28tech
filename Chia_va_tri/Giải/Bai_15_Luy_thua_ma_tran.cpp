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

ll n, k;

struct matrix
{
    ll a[50][50];
    friend matrix operator*(const matrix x, const matrix y)
    {
        matrix c;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                c.a[i][j] = 0;
                for (int k = 0; k < n; ++k)
                {
                    c.a[i][j] += x.a[i][k] * y.a[k][j];
                    c.a[i][j] %= mod;
                }
            }
        }
        return c;
    }
    friend istream &operator>>(istream &in, matrix &x)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                in >> x.a[i][j];
            }
        }
        return in;
    }
    friend ostream &operator<<(ostream &out, matrix &x)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                out << x.a[i][j] << " ";
            }
            out << endl;
        }
        return out;
    }
};

matrix binpow(matrix x, ll k)
{
    if (k == 1)
        return x;
    matrix X = binpow(x, k / 2);
    if (k % 2 == 0)
        return X * X;
    return X * X * x;
}

int main()
{
    faster();
    cin >> n >> k;
    matrix x;
    cin >> x;
    matrix result = binpow(x, k);
    cout << result;
    return 0;
}