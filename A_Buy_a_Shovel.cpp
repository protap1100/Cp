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

    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++)
    {
        int money = k * i;

        if (money % 10 == 0 || money % 10 == r)
        {
            cout << i << nl;
            return 0;
        }
    }

    return 0;
}