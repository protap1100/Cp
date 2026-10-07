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
        int n, k;
        cin >> n >> k;

        vector<int> ans;

        int i = 1;

        if (n % 4 == 2 || n % 4 == 3)
        {
            ans.push_back(1);
            ans.push_back(2);
            i = 3;
        }

        while (i + 3 <= n)
        {
            ans.push_back(i);
            ans.push_back(i + 2);

            ans.push_back(i + 1);
            ans.push_back(i + 3);

            i += 4;
        }

        if (i <= n)
        {
            ans.push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }

        cout << nl;
    }

    return 0;
}