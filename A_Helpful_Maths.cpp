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
    string s;
    cin >> s;
    vector<char> vec;
    for (char c : s)
    {
        if (c != '+')
        {
            vec.push_back(c);
        }
    }

    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        if (i > 0)
            cout << '+';
        cout << vec[i];
    }

    cout << nl;

    return 0;
}