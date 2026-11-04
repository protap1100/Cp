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

        int one = 0;
        int two = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
                one++;
            else
                two++;
        }

        if (one % 2 == 1)
        {
            NO;
        }
        else if (one == 0 && two % 2 == 1)
        {
            NO;
        }
        else
        {
            YES;
        }
    }

    return 0;
}