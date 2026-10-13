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
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        s1[i] = toupper(s1[i]);
    }

    for (int i = 0; i < s2.size(); i++)
    {
        s2[i] = toupper(s2[i]);
    }

    int result = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] > s2[i])
        {
            result = 1;
            cout << 1 << nl;
            break;
        }
        else if (s1[i] < s2[i])
        {
            result = -1;
            cout << -1 << nl;
            break;
        }
    }
    if (result == 0)
    {
        cout << 0 << nl;
    }
    return 0;
}