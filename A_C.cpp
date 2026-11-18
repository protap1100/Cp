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
        ll a, b, n;
        cin >> a >> b >> n;

        int ans = 0;

        while (a <= n && b <= n)
        {
            if (a < b)
                a += b;
            else
                b += a;

            ans++;
        }

        cout << ans << nl;
    }

    return 0;
}