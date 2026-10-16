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
        int b, c, h;
        cin >> b >> c >> h;
        int f = min(c + h, b - 1);

        int ans = 2 * f + 1;

        cout << ans << nl;
    }

    return 0;
}