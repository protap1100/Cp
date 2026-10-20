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

    int n;
    cin >> n;

    vector<vector<ll> > a(n, vector<ll>(n, 1));

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    cout << a[n - 1][n - 1] << endl;

    return 0;
}