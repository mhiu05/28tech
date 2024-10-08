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

ll binpow(ll n, ll k)
{
    if (k == 1)
        return n;
    ll X = binpow(n, k / 2);
    if (k % 2 == 0)
        return (X % mod) * (X % mod) % mod;
    return (X % mod) * (X % mod) * (n % mod) % mod;
}

int main()
{
    faster();
    ll n;
    cin >> n;
    cout << binpow(2, n - 1);
    return 0;
}