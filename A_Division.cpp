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
            if (n >= 1900)
            {
                cout << "Division 1" << nl;
            }
            else if (n >= 1600)
            {
                cout << "Division 2" << nl;
            }
            else if (n >= 1400)
            {
                cout << "Division 3" << nl;
            }
            else
            {
                cout << "Division 4" << nl;
            }
        }

        return 0;
    }