
#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define nl '\n'

int main()
{
    FAST;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << "*";
        }
        cout << nl;
    }

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << "*";
        }
        cout << nl;
    }

    return 0;
}
