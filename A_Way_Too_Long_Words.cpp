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
        string word;
        cin >> word;
        if (word.length() <= 10)
        {
            cout << word << nl;
        }
        else
        {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << nl;
        }
    }

    return 0;
}