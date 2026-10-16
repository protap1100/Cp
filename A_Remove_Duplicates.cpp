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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> res;
    for (int i = n - 1; i >= 0; i--)
    {
        bool flag = false;
        for (int j = 0; j < res.size(); j++)
        {
            if (v[i] == res[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            res.push_back(v[i]);
        }
    }

    reverse(res.begin(), res.end());

    cout << res.size() << nl;

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}