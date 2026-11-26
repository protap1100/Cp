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

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll mx = *max_element(a.begin(), a.end());

        ll secondMax = LLONG_MIN;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != mx)
                secondMax = max(secondMax, a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == mx)
                cout << a[i] - secondMax << " ";
            else
                cout << a[i] - mx << " ";
        }

        cout << nl;
    }

    return 0;
}