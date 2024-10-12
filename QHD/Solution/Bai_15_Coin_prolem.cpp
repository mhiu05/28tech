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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> F(s + 5, 1e9);
    F[0] = 0;
    for (int i = 1; i <= s; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i >= a[j])
            {
                F[i] = min(F[i], F[i - a[j]] + 1);
            }
        }
    }
    if (F[s] != 1e9)
        cout << F[s];
    else
        cout << -1;
    return 0;
}