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

    while(tCase--)
    {
        int a;
        string b;

        cin >> a >> b;

        if(a == 1)
        {
            YES;
        }
        else if(a == 2)
        {
            if(b[0] != b[1])
            {
                YES;
            }
            else
            {
                NO;
            }
        }
        else
        {
            NO;
        }
    }

    return 0;
}