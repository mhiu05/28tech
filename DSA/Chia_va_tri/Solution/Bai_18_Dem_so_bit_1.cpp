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

int count(ll n, ll k)
{
    if (n < 2)
        return n;
    ll x = log2(n) + 1;
    ll y = pow(2, x) - 1;
    if (k > y)
        return 0;
    if (k <= y / 2)
        return count(n / 2, k);
    else if (k == y / 2 + 1)
        return n % 2;
    else
        return count(n / 2, k - y / 2 - 1);
}

int main()
{
    faster();
    ll n, l, r;
    cin >> n >> l >> r;
    if (l > r)
        swap(l, r);
    ll ans = 0;
    for (ll i = l; i <= r; ++i)
    {
        ans += count(n, i);
    }
    cout << ans;
    return 0;
}