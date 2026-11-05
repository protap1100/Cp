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
    int a, b;
    cin >> a >> b;
    while (b > 0)
    {
        if(a %10 != 0){
            a--;
        }else{
            a /= 10;
        }
        b--;
    }
    cout << a << nl;
    return 0;
}