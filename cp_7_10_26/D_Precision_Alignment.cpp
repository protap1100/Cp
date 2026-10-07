#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl '\n'

ll getCost(ll a, ll b, ll c, ll x, ll k)
{
    ll sum = a + b + c;

    if (x <= sum)
    {
        return 0;
    }

    if (a == b && b == c)
    {
        return k + 1;
    }

    if (a > b || a > c || b > c)
    {
        return x - sum;
    }

    ll r1 = b - a + 1;
    ll r2 = c - b + 1;

    ll r = min(r1, r2);

    return x - sum + 2 * r;
}

int main()
{
    FAST;
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n);
        vector<ll> b(n);
        vector<ll> c(n);

        ll mn = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i] >> c[i];

            ll sum = a[i] + b[i] + c[i];

            mn = min(mn, sum);
        }

        ll lo = mn - 1;
        ll hi = mn + k + 1;

        while (lo + 1 < hi)
        {
            ll mid = lo + (hi - lo) / 2;

            ll total = 0;

            for (int i = 0; i < n; i++)
            {
                ll cost = getCost(a[i], b[i], c[i], mid, k);

                total += cost;

                if (total > k)
                {
                    break;
                }
            }
            if (total <= k)
            {
                lo = mid;
            }
            else
            {
                hi = mid;
            }
        }
        cout << lo << nl;
    }

    return 0;
}