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

        vector<int> a(n);
        vector<int> occupied(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool ok = true;

        occupied[a[0]] = 1;

        for (int i = 1; i < n; i++)
        {
            int x = a[i];

            bool left = false;
            bool right = false;

            if (x > 1 && occupied[x - 1])
                left = true;

            if (x < n && occupied[x + 1])
                right = true;

            if (!left && !right)
            {
                ok = false;
                break;
            }

            occupied[x] = 1;
        }

        if (ok)
            YES;
        else
            NO;
    }

    return 0;
}