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
        int x, y, u, d, l, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                y++;
                u++;
            }
            else if (s[i] == 'D')
            {
                y--;
                d++;
            }
            else if (s[i] == 'L')
            {
                x--;
                l++;
            }
            else if (s[i] == 'R')
            {
                x++;
                r++;
            }
        }
        bool flag = false;
        if (x == 2 && r > 0)
            flag = true;

        if (x == -2 && l > 0)
            flag = true;

        if (y == 2 && u > 0)
            flag = true;

        if (y == -2 && d > 0)
            flag = true;

        if (flag)
            YES;
        else
            NO;
    }

    return 0;
}