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
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && a < c && b < c)
        {
            cout << "STAIR" << nl;
            continue;
        }
        else if (a < b && b > c)
        {
            cout << "PEAK" << nl;
            continue;
        }
        else
        {
            cout << "NONE" << nl;
            continue;
        }
    }

    return 0;
}