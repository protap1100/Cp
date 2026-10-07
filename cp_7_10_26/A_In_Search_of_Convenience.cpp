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
        int x, y, r;
        cin >> x >> y >> r;

        bool flag = false;

        for (int i = -r; i <= r; i++)
        {
            for (int j = -r; j <= r; j++)
            {
                if (i * i + j * j == r * r)
                {
                    cout << x + i << " " << y + j << nl;
                    flag = true;
                    break;
                }
            }

            if (flag)
                break;
        }
    }

    return 0;
}