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

    int n, k;
    cin >> n >> k;

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        int y;
        cin >> y;

        if(y + k <= 5)
        {
            cnt++;
        }
    }

    cout << cnt / 3;

    return 0;
}