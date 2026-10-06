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
    int mainres = 0;
    while (tCase--)
    {
        int result = 0;

        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            result++;
        }
        if (b == 1)
        {
            result++;
        }
        if (c == 1)
            result++;

        if (result >= 2)
        {
            mainres++;
        }
    }
    cout << mainres << nl;

    return 0;
}