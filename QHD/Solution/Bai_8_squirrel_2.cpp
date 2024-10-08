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

int main()
{
    faster();
    ll n, k;
    cin >> n >> k;
    ll a[n + 5];
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    ll F[n + 5];
    F[1] = 0;
    for (int i = 2; i <= n; ++i)
    {
        ll tmp = LLONG_MAX;
        for (int j = 1; j <= k; ++j)
        {
            if (i - j >= 1)
                tmp = min(tmp, abs(a[i] - a[i - j]) + F[i - j]);
        }
        F[i] = tmp;
    }
    cout << F[n];
    return 0;
}