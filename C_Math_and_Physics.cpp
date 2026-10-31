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

        ll sum = 0;
        bool possible = false;
        bool middle = false;
        int first = 0, last = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            sum += x;

            if (i == 0)
            {
                first = x;
            }
            if (i == n - 1)
            {
                last = x;
            }

            if (x >= 2)
            {
                possible = true;

                if (i > 0 && i < n - 1)
                {
                    middle = true;
                }
            }
        }

        if (!possible)
        {
            cout << -1 << nl;
        }
        else if (middle)
        {
            cout << sum - 1 << nl;
        }
        else
        {
            cout << first + last - 1 << nl;
        }
    }

    return 0;
}