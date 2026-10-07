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
    long long n;
    cin >> n;

    int count = 0;

    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n /= 10;
    }

    bool flag = false;

    while (count > 0)
    {
        if (count % 10 != 4 && count % 10 != 7)
        {
            flag = false;
            break;
        }

        flag = true;
        count /= 10;
    }

    if (flag)
    {
        YES;
    }
    else
    {
        NO;
    }

    return 0;
}