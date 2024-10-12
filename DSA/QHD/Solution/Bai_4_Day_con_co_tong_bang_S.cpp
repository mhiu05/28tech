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
    int n, s;
    cin >> n >> s;
    int F[s + 5] = {0};
    int a[n];
    for (int &x : a)
        cin >> x;
    F[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = s; j >= a[i]; --j)
        {
            if (F[j - a[i]] == 1)
            {
                F[j] = 1;
            }
        }
    }
    if (F[s] == 1)
        cout << 1;
    else
        cout << 0;
    return 0;
}