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

        int cnt = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a == 0)
                cnt++;
            else
                cnt = 0;

            ans = max(ans, cnt);
        }

        cout << ans << nl;
    }

    return 0;
}