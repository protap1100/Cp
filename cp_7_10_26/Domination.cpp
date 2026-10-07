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

        vector<vector<int> > adj(n + 1);

        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        ll total = 1LL * n * (n - 1) * (n - 2) / 6;

        ll leafCount = 0;
        ll duplicate = 0;

        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size() == 1)
            {
                leafCount++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;

            for (int x : adj[i])
            {
                if (adj[x].size() == 1)
                {
                    cnt++;
                }
            }

            duplicate += 1LL * cnt * (cnt - 1) / 2;
        }

        ll leafBad = leafCount * (n - 2) - duplicate;

        ll degree2Bad = 0;

        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size() == 2)
            {
                int a = adj[i][0];
                int b = adj[i][1];

                if (adj[a].size() != 1 && adj[b].size() != 1)
                {
                    degree2Bad++;
                }
            }
        }

        ll ans = total - leafBad - degree2Bad;

        cout << ans << nl;
    }

    return 0;
}