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

        string s;
        cin >> s;

        string res = "";

        for (int i = 0; i < s.size();)
        {
            char c = ' ';
            int x;

            if (i + 2 < s.size() && s[i + 2] == '0')
            {
                x = (s[i] - '0') * 10 + (s[i + 1] - '0');

                c = 'a' + x - 1;

                res.push_back(c);

                i += 3;
            }
            else
            {
                x = s[i] - '0';

                c = 'a' + x - 1;

                res.push_back(c);

                i++;
            }
        }

        cout << res << nl;
    }

    return 0;
}