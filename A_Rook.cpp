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
        string s;
        cin >> s;

        for (char c = 'a'; c <= 'h'; c++)
        {
            if (c != s[0])
            {
                cout << c << s[1] << nl;
            }
        }

        for (char c = '1'; c <= '8'; c++)
        {
            if (c != s[1])
            {
                cout << s[0] << c << nl;
            }
        }

        cout << endl;
    }

    return 0;
}