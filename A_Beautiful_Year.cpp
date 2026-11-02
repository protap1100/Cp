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
    int y;
    cin >> y;

    while (true)
    {
        y++;

        string s = to_string(y);

        set<char> st;

        for (int i = 0; i < 4; i++)
        {
            st.insert(s[i]);
        }

        if (st.size() == 4)
        {
            cout << y << nl;
            break;
        }
    }

    return 0;
}