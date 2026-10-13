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

    int up = 0;
    int low = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            low++;
        }
        else
        {
            up++;
        }
    }

    if(low >= up)
    {
        for(auto &c : s)
        {
            c = tolower(c);
        }
    }
    else
    {
        for(auto &c : s)
        {
            c = toupper(c);
        }
    }

    cout << s ;
    return 0;
}