#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define YES cout << "Yes\n"
#define NO cout << "No\n"
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

        ll ans = 0;

        // No swap
        ll mx = 0;

        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            ans += mx;
        }

        // Try every possible swap
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(a[i], a[j]);

                ll sum = 0;
                mx = 0;

                for (int k = 0; k < n; k++)
                {
                    mx = max(mx, a[k]);
                    sum += mx;
                }

                ans = max(ans, sum);

                swap(a[i], a[j]);
            }
        }

        cout << ans << nl;
    }

    return 0;
}