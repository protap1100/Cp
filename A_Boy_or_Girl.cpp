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
    string name;
    cin >> name;

    string unique = "";

    for (char c : name)
    {
        if (unique.find(c) == string::npos)
        {
            unique += c;
        }
    }

    if (unique.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << nl;
    }
    else
    {
        cout << "IGNORE HIM!" << nl;
    }
    return 0;
}