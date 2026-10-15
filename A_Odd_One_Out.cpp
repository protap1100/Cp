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
        vector<int> v(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }

        int r = v[0];

        if (v[0] == v[1])
        {
            r = v[2];
        }
        else if (v[1] == v[2])
        {
            r = v[0];
        }
        else if (v[0] == v[2])
        {
            r = v[1];
        }

        cout << r << nl;
    }

    return 0;
}