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
    int n;
    cin >> n;
    ll a[n + 5];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    ll cnt_min[n + 5];
    cnt_min[1] = 0;
    cnt_min[2] = abs(a[2] - a[1]);
    for (int i = 3; i <= n; ++i)
    {
        cnt_min[i] = min(abs(a[i - 1] - a[i]) + cnt_min[i - 1], cnt_min[i - 2] + abs(a[i - 2] - a[i]));
    }
    cout << cnt_min[n];
    return 0;
}