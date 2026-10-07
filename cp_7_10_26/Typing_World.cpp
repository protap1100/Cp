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
        int n, m;
        cin >> n >> m;

        string s, l;
        cin >> s >> l;

        int current = 1;
        int ans = 1;

        for (int i = 1; i < n; i++)
        {
            bool left1 = false;
            bool left2 = false;

            for (int j = 0; j < m; j++)
            {
                if (s[i - 1] == l[j]){
                    left1 = true;
                }
                if (s[i] == l[j]){
                    left2 = true;
                }
            }
            if (left1 == left2){
                current++;
            }
            else{
                current = 1;
            }
            ans = max(ans, current);
        }

        cout << ans << nl;
    }

    return 0;
}