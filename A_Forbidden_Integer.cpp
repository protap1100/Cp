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
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1)
        {
            YES;
            cout << n << nl;

            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }

            cout << nl;
        }
        else
        {
            if (n == 1)
            {
                NO;
            }
            else if (n % 2 == 0)
            {
                YES;
                cout << n / 2 << nl;

                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }

                cout << nl;
            }
            else if (k >= 3)
            {
                YES;
                cout << 1 + (n - 3) / 2 << nl;

                cout << 3 << " ";

                for (int i = 0; i < (n - 3) / 2; i++)
                {
                    cout << 2 << " ";
                }

                cout << nl;
            }
            else
            {
                NO;
            }
        }
    }

    return 0;
}