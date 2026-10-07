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
    // vector<vector<int>> v(5,vector<int>(5));
    vector<vector<int> >  v(5, vector<int>(5));
    for(int i =0;i< 5;i++){
        for(int j =0;j<5;j++){
            cin >> v[i][j];
        }
    }
    int count = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(v[i][j] == 1){
                count = abs(i - 2) + abs(j - 2);
            }
        }
    }

    cout << count;
    return 0;
}