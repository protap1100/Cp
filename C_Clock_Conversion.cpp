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
        string s;
        cin >> s;

        int hour = (s[0] - '0') * 10 + (s[1] - '0');

        string time = s.substr(2);
        string ampm;

        if (hour == 0)
        {
            hour = 12;
            ampm = "AM";
        }
        else if (hour < 12)
        {
            ampm = "AM";
        }
        else if (hour == 12)
        {
            ampm = "PM";
        }
        else
        {
            hour -= 12;
            ampm = "PM";
        }

        cout << setw(2) << setfill('0') << hour << time << " " << ampm << nl;
    }

    return 0;
}