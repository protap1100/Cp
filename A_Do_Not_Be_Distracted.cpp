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

        string s;
        cin >> s;

        set<char> st;
        bool ok = true;

        st.insert(s[0]);

        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                if (st.count(s[i]))
                {
                    ok = false;
                    break;
                }

                st.insert(s[i]);
            }
        }

        if (ok)
            YES;
        else
            NO;
    }

    return 0;
}