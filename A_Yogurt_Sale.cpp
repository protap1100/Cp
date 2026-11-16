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
        int n, a, b;
        cin >> n >> a >> b;

        int ans = 0;

        ans += (n / 2) * min(2 * a, b);

        if (n % 2 == 1)
        {
            ans += a;
        }

        cout << ans << nl;
    }

    return 0;
}