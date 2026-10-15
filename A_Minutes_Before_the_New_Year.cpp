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
        int a, b;
        cin >> a >> b;
        int c = 24 * 60;
        int r = 0;
        r = c - ((a * 60) + b);
        cout << r << nl;
    }

    return 0;
}