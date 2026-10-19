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
        ll n;
        cin >> n;

        string s;
        cin >> s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        string ans = rev + s;

        if (s < ans)
        {
            cout << s << nl;
        }
        else
        {
            cout << ans << nl;
        }
    }

    return 0;
}