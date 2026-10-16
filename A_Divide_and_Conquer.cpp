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
        int x, y;
        cin >> x >> y;

        if (y > x)
        {
            NO;
            continue;
        }

        bool flag = false;

        for(int i = 1; i <= x; i++)
        {
            if(x % i == 0)
            {
                if(x / i == y)
                {
                    flag = true;
                    break;
                }
            }
        }

        if(flag)
        {
            YES;
        }
        else
        {
            NO;
        }
    }

    return 0;
}