#include <bits/stdc++.h>
using namespace std;

int main()
{
    int noTsts;
    scanf("%d", &noTsts);
    while (noTsts--)
    {
        int n;
        scanf("%d", &n);
        vector<vector<int>> g(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        if (n % 2 == 0)
        {
            printf("%d\n", n + 1);
            continue;
        }
        int cand[3] = {n, n + 1, n + 2};
        int left[3] = {n, (n + 1) / 2, 1};
        int ans = n + 1;
        for (int c = 0; c < 3; c++)
        {
            int k = cand[c], v = left[c];
            vector<int> comp(n + 1, 0);
            vector<int> q;
            q.push_back(v);
            comp[v] = -1;
            int id = 0;
            for (int y : g[v])
            {
                comp[y] = ++id;
                q.push_back(y);
            }
            for (size_t h = 1; h < q.size(); h++)
            {
                int x = q[h];
                for (int y : g[x])
                {
                    if (comp[y] == 0)
                    {
                        comp[y] = comp[x];
                        q.push_back(y);
                    }
                }
            }
            bool ok = false;
            for (int i = max(1, k - n); i < k - i; i++)
            {
                int j = k - i;
                if (i == v || j == v)
                    continue;
                if (comp[i] != comp[j])
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
            {
                ans = k;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}