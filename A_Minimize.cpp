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
        int sum = 0;
        int c = a;
        for (int i = c; i <= b; i++)
        {
            int d;
            d = (c - a) + (b - c);
            if (sum < d)
            {
                sum = d;
            }
        }
        cout << sum << nl;
    }

    return 0;
}