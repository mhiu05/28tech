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
    ll a[n];
    for (ll &x : a)
        cin >> x;
    int ans = 0;
    sort(a, a + n);
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        if (sum > k)
        {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}