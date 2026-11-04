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
        string a;
        cin >> a;

        if (a == "abc")
        {
            YES;
            continue;
        }

        swap(a[0], a[1]);

        if (a == "abc")
        {
            YES;
            continue;
        }

        swap(a[0], a[1]);

        swap(a[0], a[2]);

        if (a == "abc")
        {
            YES;
            continue;
        }

        swap(a[0], a[2]);

        swap(a[1], a[2]);

        if (a == "abc")
        {
            YES;
            continue;
        }

        NO;
    }

    return 0;
}