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
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.size() != s2.size())
    {
        NO;
        return 0;
    }

    bool flag = true;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[s2.size() - 1 - i])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
    return 0;
}