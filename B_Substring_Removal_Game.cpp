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

        vector<int> a;
        int cnt = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
            else
            {
                if (cnt > 0)
                {
                    a.push_back(cnt);
                    cnt = 0;
                }
            }
        }

        if (cnt > 0)
        {
            a.push_back(cnt);
        }

        sort(a.rbegin(), a.rend());

        int ans = 0;

        for (int i = 0; i < a.size(); i += 2)
        {
            ans += a[i];
        }

        cout << ans << nl;
    }

    return 0;
}