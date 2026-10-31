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
        int x, y, z;
        cin >> x >> y >> z;
        int n = x + y + z;
        if (y - z >= 0)
        {
            cout << string(n, 'R') << nl;
        }
        else if (z - x >= 0)
        {
            cout << string(n, 'S') << nl;
        }
        else
        {
            cout << string(n, 'P') << nl;
        }
    }

    return 0;
}