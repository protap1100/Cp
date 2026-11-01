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

    ll n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << nl;
    }
    else
    {
        cout << -(n + 1) / 2 << nl;
    }

    return 0;
}