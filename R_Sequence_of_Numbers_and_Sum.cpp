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
    int n, m;
    while(cin >> n >> m)
    {
        if(n <= 0 || m <= 0)
        {
            break;
        }
        int sum = 0;
        if(n > m){
            for(int i = m; i <= n; i++)
            {
                cout << i << " ";
                sum = sum + i;
            }
        }else{
            for(int i = n; i <= m; i++)
            {
                cout << i << " ";
                sum = sum + i;
            }
        }
        cout << "sum =" << sum << nl;
    }

    return 0;
}