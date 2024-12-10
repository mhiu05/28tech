#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Ps
{
public:
    ll tu, mau;
    friend istream &operator>>(istream &in, Ps &a)
    {
        cin >> a.tu >> a.mau;
        return in;
    }
    void show()
    {
        ll x = tu / __gcd(tu, mau);
        ll y = mau / __gcd(tu, mau);
        cout << x << "/" << y;
    }
};
int main()
{
    Ps a;
    cin >> a;
    a.show();
    return 0;
}