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
        int n;
        cin >> n;

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool sorted = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                sorted = false;
                break;
            }
        }

        if (!sorted)
        {
            cout << 0 << nl;
            continue;
        }

        ll ans = LLONG_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            ll diff = a[i + 1] - a[i];

            ll operations = diff / 2 + 1;

            ans = min(ans, operations);
        }

        cout << ans << nl;
    }

    return 0;
}