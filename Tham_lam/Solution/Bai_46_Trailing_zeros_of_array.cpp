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

int count_2(int n)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        ++cnt;
        n /= 2;
    }
    return cnt;
}

int count_5(int n)
{
    int cnt = 0;
    while (n % 5 == 0)
    {
        ++cnt;
        n /= 5;
    }
    return cnt;
}

int main()
{
    faster();
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    int cnt_2 = 0, cnt_5 = 0;
    for (int x : a)
    {
        cnt_2 += count_2(x);
        cnt_5 += count_5(x);
    }
    cout << min(cnt_2, cnt_5);
    return 0;
}