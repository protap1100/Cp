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

    int n;
    ll x;
    cin >> n >> x;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        char c;
        ll d;

        cin >> c >> d;

        if (c == '+')
        {
            x += d;
        }
        else
        {
            if (x >= d)
            {
                x -= d;
            }
            else
            {
                ans++;
            }
        }
    }

    cout << x << " " << ans << nl;

    return 0;
}