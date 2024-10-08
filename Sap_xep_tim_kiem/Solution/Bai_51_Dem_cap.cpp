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

ll a[200005], b[200005];
ll n, m;
int cnt[10];

ll count(int a)
{
    ll ans = cnt[0] + cnt[1];
    if (a == 0)
        return 0;
    if (a == 1)
        return cnt[0];
    auto it = upper_bound(b, b + m, a);
    int pos = it - b;
    ans += m - pos;
    if (a == 2)
    {
        ans -= (cnt[3] + cnt[4]);
    }
    if (a == 3)
        ans += cnt[2];
    return ans;
}

int main()
{
    faster();
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
        if (b[i] < 5)
            cnt[b[i]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += count(a[i]);
    }
    cout << ans;
    return 0;
}