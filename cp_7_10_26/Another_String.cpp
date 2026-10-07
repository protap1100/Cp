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
        string a, b;
        cin >> a >> b;
        int countA = 0;
        int countB = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                countA++;

            if (b[i] == '1')
                countB++;
        }
        if (countA % 2 == countB % 2)
            YES;
        else
            NO;
    }

    return 0;
}