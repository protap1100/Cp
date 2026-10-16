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
    int ch = 0;
    int bi = 0;
    int bk = 0;

    int j = 0;
    int k = 1;
    int l = 2;
    for (int i = 0; i < n; i++)
    {

        if (j < n)
        {
            ch += v[j];
            j += 3;
        }
        if (k < n)
        {
            bi += v[k];
            k += 3;
        }
        if (l < n)
        {
            bk += v[l];
            l += 3;
        }
    }

    if (ch > bi && ch > bk)
    {
        cout << "chest" << nl;
    }
    else if (bi > ch && bi > bk)
    {
        cout << "biceps" << nl;
    }
    else
    {
        cout << "back" << nl;
    }
    return 0;
}