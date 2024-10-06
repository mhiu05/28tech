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

ll F[65];
void variant_fibonacci()
{
    F[1] = 1;
    F[2] = 1;
    F[3] = 2;
    for (int i = 4; i <= 60; ++i)
    {
        F[i] = F[i - 1] + F[i - 2] + F[i - 3];
    }
}

string solve(ll n, ll k)
{
    if (n == 1)
        return "28tech";
    if (n == 2)
        return "C++";
    if (n == 3)
    {
        if (k == 1)
            return "DSA";
        return "JAVA";
    }

    if (k <= F[n - 3])
    {
        return solve(n - 3, k);
    }
    else if (k <= F[n - 2])
    {
        return solve(n - 2, k - F[n - 3]);
    }
    else
    {
        return solve(n - 3, k - F[n - 3] - F[n - 2]);
    }
}

int main()
{
    faster();
    variant_fibonacci();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}