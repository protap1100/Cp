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
    ll x[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }

    sort(x, x + 4);

    ll a = x[3] - x[2];
    ll b = x[3] - x[1];
    ll c = x[3] - x[0];

    cout << a << " " << b << " " << c << "\n";

    return 0;
    return 0;
}