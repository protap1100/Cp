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
        int n, x;
        cin >> n >> x;

        vector<int> vec(n);

        int odd = 0;
        int even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];

            if (vec[i] % 2 != 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        bool flag = false;

        for (int i = 1; i <= x; i += 2)
        {
            if (i <= odd && x - i <= even)
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }
    }

    return 0;
}