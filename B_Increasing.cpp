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
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 0; i < a-1; i++)
        {
            if (v[i] == v[i + 1])
            {
                flag = false;
            }
        }
        if (!flag)
        {
            NO;
        }
        else
        {
            YES;
        }
    }

    return 0;
}