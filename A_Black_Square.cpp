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

    int a[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }

    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - '0';

        ans += a[x - 1];
    }

    cout << ans << nl;

    return 0;
}