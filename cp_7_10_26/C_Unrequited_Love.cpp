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
     while (tCase--) {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<ll, ll> mp[2];

        map<ll, ll> old[2];

        ll ans = 0;

        for (int x = 0; x <= n - 5; x++) {

            if (x - 6 >= 0) {
                int p = (x - 6) % 2;

                ll value = a[x - 6] + a[x - 4] - a[x - 2];

                old[p][value]++;
            }

            ll value = a[x] + a[x + 2] - a[x + 4];

            int p = x % 2;

            ans += mp[1 - p][value];

            ans += old[p][value];

            mp[p][value]++;
        }

        cout << ans << '\n';
    }

    return 0;
}