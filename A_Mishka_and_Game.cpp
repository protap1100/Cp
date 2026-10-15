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

    int m = 0, c = 0;

    while (tCase--)
    {
        int mc, cc;
        cin >> mc >> cc;

        if (mc > cc)
        {
            m++;
        }
        else if (mc < cc)
        {
            c++;
        }
    }

    if (c > m)
    {
        cout << "Chris" << nl;
    }
    else if (m > c)
    {
        cout << "Mishka" << nl;
    }
    else
    {
        cout << "Friendship is magic!^^" << nl;
    }

    return 0;
}