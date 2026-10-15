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
        int res = 0;
        int n1 = s[0] - '0';
        int n2 = s[2] - '0';
        cout << n1 + n2 << nl;
    }

    return 0;
}