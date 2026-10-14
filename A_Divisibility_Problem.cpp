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
        int a, b;
        cin >> a >> b;
        int result = 0;
        if (a % b == 0)
        {
            // cout << 0  << nl;
            result = 0;
        }
        else
        {
            int c = a % b;
            for (int i = c; i < b; i++)
            {
                if (c % b != 0)
                {
                    result++;
                }
            }
        }
        cout << result << nl;
    }

    return 0;
}