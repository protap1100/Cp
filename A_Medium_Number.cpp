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
        // int a, b, c;
        // cin >> a >> b >> c;
        // int r = a;
        // if (a < b && b > c) // a < b > c
        // {
        //     r = b;
        // }
        // else if (b < a && a > c) // b < a > c
        // {
        //     r = a;
        // }
        // else if(a < c && c > b) // a < c > b
        // {
        //     r = c;
        // }
        // cout << r << nl;
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << v[1] << nl;
    }

    return 0;
}