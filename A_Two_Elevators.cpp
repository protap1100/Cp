#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define nl '\n'

int main()
{
    FAST;

    int tCase;
    cin >> tCase;

    while (tCase--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int time1 = abs(a - 1);
        int time2 = abs(b - c) + abs(c - 1);

        if (time1 < time2)
            cout << 1 << nl;
        else if (time2 < time1)
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }

    return 0;
}