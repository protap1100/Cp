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

        int pos = -1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                pos = i;
                break;
            }
        }

        s.erase(pos, 1);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                s.erase(i, 1);
                break;
            }
        }

        cout << s << nl;
    }

    return 0;
}