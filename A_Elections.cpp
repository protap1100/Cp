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
        ll a, b, c;
        cin >> a >> b >> c;

        ll x, y, z;

        if (a > b && a > c)
            x = 0;
        else
            x = max(b, c) - a + 1;

        if (b > a && b > c)
            y = 0;
        else
            y = max(a, c) - b + 1;

        if (c > a && c > b)
            z = 0;
        else
            z = max(a, b) - c + 1;

        cout << x << " " << y << " " << z << nl;
    }

    return 0;
}