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

int cnt[1000005];

void tsnt_a(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt[i]++;
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        cnt[n]++;
    }
}

void tsnt_b(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt[i]--;
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        cnt[n]--;
    }
}

int main()
{
    faster();
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        tsnt_a(x);
    }
    for (int i = 1; i <= m; ++i)
    {
        int x;
        cin >> x;
        tsnt_b(x);
    }
    for (int i = 0; i <= 1000000; ++i)
    {
        if (cnt[i] != 0)
        {
            cout << "29tech";
            return 0;
        }
    }
    cout << "28tech";
    return 0;
}