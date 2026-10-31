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

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        string s, t;
        cin >> s >> t;

        int cnt[26] = {};

        for (int i = 0; i < n; i++)
        {
            cnt[s[i] - 'a']++;
        }

        for (int i = 0; i < m; i++)
        {
            cnt[t[i] - 'a']--;
        }

        string target = "six";

        for (int i = 0; i < 3; i++)
        {
            cnt[target[i] - 'a']--;
        }

        bool ok = true;

        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            YES;
        else
            NO;
    }

    return 0;
}