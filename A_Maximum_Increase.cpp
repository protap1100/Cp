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
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cur = 1;
    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            cur++;
        }
        else
        {
            cur = 1;
        }

        ans = max(ans, cur);
    }

    cout << ans << nl;

    return 0;
}