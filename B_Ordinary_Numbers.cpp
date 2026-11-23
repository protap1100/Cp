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
        ll n;
        cin >> n;

        int ans = 0;

        for (int i = 1; i <= 9; i++)
        {
            ll x = i;

            while (x <= n)
            {
                ans++;

                x = x * 10 + i;
            }
        }

        cout << ans << nl;
    }

    return 0;
}