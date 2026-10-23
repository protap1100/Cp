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
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++)    {
        cin >> a[i];

        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans += mx - a[i];
    }

    cout << ans << endl;
    return 0;
}