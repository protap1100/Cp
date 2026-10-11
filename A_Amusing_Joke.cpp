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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string s = s1 + s2;
    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());
    if (s == s3)
    {
        YES;
    }
    else
    {
        NO;
    }
    return 0;
}