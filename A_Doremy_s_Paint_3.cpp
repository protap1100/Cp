#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define YES cout << "Yes\n"
#define NO cout << "No\n"
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

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        if (mp.size() > 2)
        {
            NO;
        }
        else if (mp.size() == 1)
        {
            YES;
        }
        else
        {
            int a = mp.begin()->second;
            int b = mp.rbegin()->second;

            if (abs(a - b) <= 1)
                YES;
            else
                NO;
        }
    }

    return 0;
}