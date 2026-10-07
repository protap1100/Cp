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
        vector<int> v;
        vector<bool> printed(n + 1, false);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
            {
                v.push_back(i);
            }
            else if (s[i - 1] == '2')
            {
                if (v.empty())
                {
                    printed[i] = true;
                }
                else
                {
                    int x = v.back();
                    printed[x] = true;
                    v.pop_back();
                }
            }
            else
            {
                printed[i] = true;
            }
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!printed[i])
            {
                count++;
            }
        }
        cout << count << nl;
        for (int i = 1; i <= n; i++)
        {
            if (!printed[i])
            {
                cout << i << " ";
            }
        }
        cout << nl;
    }
    return 0;
}