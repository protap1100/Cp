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
        ll n, k;
        cin >> n >> k;

        ll sum = k * (2 * n - k + 1) / 2;

        if (sum % 2 == 0)
        {
            YES;
        }
        else
        {
            NO;
        }
    }

    return 0;
}