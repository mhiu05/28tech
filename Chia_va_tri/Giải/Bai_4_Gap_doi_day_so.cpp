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

int find_number(ll n, ll k)
{
    ll tmp = 1ll * pow(2, n - 1);
    if (k == tmp)
        return n;
    else if (k < tmp)
        return find_number(n - 1, k);
    else
        return find_number(n - 1, k - tmp);
}

int main()
{
    faster();
    ll n, k;
    cin >> n >> k;
    cout << find_number(n, k);
    return 0;
}