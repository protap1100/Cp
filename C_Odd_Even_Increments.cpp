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

        int oddParity = -1;
        int evenParity = -1;

        bool ok = true;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            if (i % 2 == 1)
            {
                if (oddParity == -1)
                    oddParity = x % 2;
                else if (oddParity != x % 2)
                    ok = false;
            }
            else
            {
                if (evenParity == -1)
                    evenParity = x % 2;
                else if (evenParity != x % 2)
                    ok = false;
            }
        }

        if (ok)
            YES;
        else
            NO;
    }

    return 0;
}