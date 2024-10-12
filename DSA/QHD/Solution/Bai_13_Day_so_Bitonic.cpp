#include <bits/stdc++.h>
#define endl "\n"
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
    int a[n], left[105], right[105];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        left[i] = a[i];
        right[i] = a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (a[i] > a[j])
            {
                left[i] = max(left[i], left[j] + a[i]);
            }
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                right[i] = max(right[i], right[j] + a[i]);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans = max(ans, right[i] + left[i] - a[i]);
    }
    cout << ans;
    return 0;
}