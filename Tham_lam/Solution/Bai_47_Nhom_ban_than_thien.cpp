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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    int min_val = INT_MAX;
    for (int i = k - 1; i < n; ++i)
    {
        min_val = min(min_val, a[i] - a[i - k + 1]);
    }
    cout << min_val;
    return 0;
}