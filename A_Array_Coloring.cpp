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

        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sum += x;
        }

        if (sum % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}