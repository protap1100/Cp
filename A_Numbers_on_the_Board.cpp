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
        int l, r;
        cin >> l >> r;
        int n = r - l + 1;
        if (l > 0 || r < 0)
        {
            cout << n - 1 << nl;
        }
        else
        {
            int m = min(-l, r);
            int kp = 2 * m + 1;
            if (-l != r)
                kp++;
            cout << n - kp << nl;
        }
    }

    return 0;
}