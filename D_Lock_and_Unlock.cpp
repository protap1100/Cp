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
        }

        sort(a.begin(), a.end());

        ll med = a[n / 2];
        ll cost = 0;

        for (int i = 0; i < n; i++)
        {
            cost += llabs(a[i] - med);
        }

        cout << cost << " " << a[n - 1] - a[0] << nl;
    }

    return 0;
}