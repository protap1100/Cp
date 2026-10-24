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
    int Y, W;
    cin >> Y >> W;

    int mx = max(Y, W);

    int good = 6 - mx + 1;

    if(good == 1) {
        cout << "1/6" << endl;
    }
    else if(good == 2) {
        cout << "1/3" << endl;
    }
    else if(good == 3) {
        cout << "1/2" << endl;
    }
    else if(good == 4) {
        cout << "2/3" << endl;
    }
    else if(good == 5) {
        cout << "5/6" << endl;
    }
    else {
        cout << "1/1" << endl;
    }

    return 0;
}