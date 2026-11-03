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

    ll a, b, c;
    cin >> a >> b >> c;

    ll cost = a * c * (c + 1) / 2;

    if (cost > b)
        cout << cost - b << nl;
    else
        cout << 0 << nl;

    return 0;
}