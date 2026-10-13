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

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int result = 0;

    int c = v[k - 1];

    for(int i = 0; i < n; i++)
    {
        if(c <= v[i] && v[i] > 0)
        {
            result++;
        }
    }

    cout << result;

    return 0;
}