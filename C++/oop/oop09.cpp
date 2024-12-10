#include <bits/stdc++.h>
#define fi first
#define sc second
#define endl "\n"
using namespace std;

using ll = long long;

class Gv
{
public:
    string id, name;
    int wage;
    friend istream &operator>>(istream &in, Gv &a)
    {
        getline(in, a.id);
        getline(in, a.name);
        cin >> a.wage;
        return in;
    }
    void output()
    {
        int add;
        string s = id.substr(0, 2);
        if (s == "HT")
            add = 2000000;
        if (s == "HP")
            add = 900000;
        if (s == "GV")
            add = 500000;
        cout << id << " " << name << " " << stoi(id.substr(2)) << " " << wage * stoi(id.substr(2)) + add;
    }
};

int main()
{
    Gv a;
    cin >> a;
    a.output();
    return 0;
}