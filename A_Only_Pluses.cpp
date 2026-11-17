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

        ll ans = 0;

        for (int i = 0; i <= 5; i++)
        {
            for (int j = 0; j <= 5 - i; j++)
            {
                int k = 5 - i - j;

                ll x = (a + i) * (b + j) * (c + k);

                ans = max(ans, x);
            }
        }

        cout << ans << nl;
    }

    return 0;
}