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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;

    int sereja = 0;
    int dima = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[l] > a[r])
        {
            if (i % 2 == 0)
            {
                sereja += a[l];
            }
            else
            {
                dima += a[l];
            }

            l++;
        }
        else
        {
            if (i % 2 == 0)
            {
                sereja += a[r];
            }
            else
            {
                dima += a[r];
            }

            r--;
        }
    }

    cout << sereja << " " << dima << endl;

    return 0;
}