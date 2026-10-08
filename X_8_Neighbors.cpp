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
    cin >> n >> m;

    vector<vector<char> > vec(n, vector<char>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    x--;
    y--;

    bool flag = true;

    for(int i = x - 1; i <= x + 1; i++) {
        for(int j = y - 1; j <= y + 1; j++) {

            if(i < 0 || i >= n || j < 0 || j >= m) {
                continue;
            }

            if(i == x && j == y) {
                continue;
            }

            if(vec[i][j] == '.') {
                flag = false;
            }
        }
    }

    if(flag) {
        cout << "yes" << nl;
    }
    else {
        cout << "no" << nl;
    }

    return 0;
}