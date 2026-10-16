#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl '\n'

int main()
{
    FAST;

    int tCase;
    cin >> tCase;

    while (tCase--)
    {
        ll l, r;
        cin >> l >> r;

        if (l == 1 && r == 1)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << r - l << nl;
        }
    }

    return 0;
}