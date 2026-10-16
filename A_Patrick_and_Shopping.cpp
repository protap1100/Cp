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

    int a, b, c;
    cin >> a >> b >> c;

    int sum = 2 * a + 2 * b;
    int sum2 = a + b + c;
    int sum3 = 2 * a + 2 * c;
    int sum4 = 2 * b + 2 * c;

    int ans = min(sum, sum2);
    ans = min(ans, sum3);
    ans = min(ans, sum4);

    cout << ans << nl;

    return 0;
}