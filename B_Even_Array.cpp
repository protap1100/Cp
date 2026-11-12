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

        int evenWrong = 0;
        int oddWrong = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (i % 2 != a % 2)
            {
                if (i % 2 == 0)
                    evenWrong++;
                else
                    oddWrong++;
            }
        }

        if (evenWrong != oddWrong)
            cout << -1 << nl;
        else
            cout << evenWrong << nl;
    }

    return 0;
}