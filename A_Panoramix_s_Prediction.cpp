#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl '\n'

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    FAST;

    int n, m;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++)
    {
        if (isPrime(i))
        {
            if (i == m)
            {
                YES;
            }
            else
            {
                NO;
            }

            return 0;
        }
    }

    return 0;
}