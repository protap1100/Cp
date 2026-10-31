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

        vector<ll> odd, even;
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            sum += x;

            if (i % 2 == 0)
            {
                odd.push_back(x);
            }
            else
            {
                even.push_back(x);
            }
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        ll cur = 0, best = 0;

        for (int k = 0; k < (int)even.size(); k++)
        {
            cur += odd[k] + even[k];
            best = min(best, cur);
        }

        cout << sum - 2 * best << nl;
    }

    return 0;
}