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
        {
            cin >> a[i];
            a[i] = 1LL << a[i];
        }

        sort(a.rbegin(), a.rend());

        ll x = 0;
        ll y = 0;

        for (int i = 0; i < n; i++)
        {
            if (x <= y)
                x += a[i];
            else
                y += a[i];
        }

        cout << x * y << nl;
    }

    return 0;
}