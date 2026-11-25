#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define nl '\n'

int main()
{
    FAST;

    int tCase;
    cin >> tCase;

    while (tCase--)
    {
        int n;
        cin >> n;

        vector<ll> b(n);
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int j = 0;

        for (int i = 0; i < n; i += 2)
        {
            a[i] = b[j];
            j++;
        }

        for (int i = n - 1; i >= 0 && j < n; i--)
        {
            a[j * 0 + (n - 1 - i) * 2 + 1] = b[j];
            j++;
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << nl;
    }

    return 0;
}