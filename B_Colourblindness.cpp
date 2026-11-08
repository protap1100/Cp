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

        string a, b;
        cin >> a >> b;

        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' || b[i] == 'R')
            {
                if (a[i] != b[i])
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok)
            YES;
        else
            NO;
    }

    return 0;
}