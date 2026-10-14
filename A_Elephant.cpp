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
    int result = 0;
    if (n % 5 == 0)
    {
        result = (n / 5);
    }
    else
    {
        result = (n / 5) + 1;
    }
    cout << result;
    return 0;
}