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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int countMin = 0;
        int countMax = 0;
        int mn = v[0];
        int mx = v[n - 1];
        if ((mn + mx) % 2 == 0)
        {
            cout << 0 << nl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != mx % 2)
            {
                countMin++;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] % 2 != mn % 2)
            {
                countMax++;
            }
            else
            {
                break;
            }
        }
        cout << min(countMin, countMax) << nl;
    }

    return 0;
}