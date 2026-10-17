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
        vector<vector<int> > v(2, vector<int>(2));

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> v[i][j];
            }
        }

        bool flag = false;

        for (int r = 0; r < 4; r++)
        {
            if (v[0][0] < v[0][1] &&
                v[0][0] < v[1][0] &&
                v[0][1] < v[1][1] &&
                v[1][0] < v[1][1])
            {
                flag = true;
            }

            int temp = v[0][0];

            v[0][0] = v[1][0];
            v[1][0] = v[1][1];
            v[1][1] = v[0][1];
            v[0][1] = temp;
        }

        if (flag)
        {
            YES;
        }
        else
        {
            NO;
        }
    }

    return 0;
}