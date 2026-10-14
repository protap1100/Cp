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

    vector<string> v(n);

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i][1] == '+')
        {
            result++;
        }
        else
        {
            result--;
        }
    }

    cout << result;

    return 0;
}