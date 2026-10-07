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

    int X, K, Y;
    cin >> X >> K >> Y;

    bool flag = false;

    for (int i = 1; i <= X; i++)
    {
        if (i * K == Y)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        YES;
    else
        NO;

    return 0;
}