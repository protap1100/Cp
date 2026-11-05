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
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        int a;
        cin >> a ;
        if(a ==1 ){
            cout << "HARD" << nl;
            return 0;
        }
    }
    cout << "EASY" << nl;
    return 0;
}