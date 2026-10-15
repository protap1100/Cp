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

    while (tCase--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        string s2 = "Timur";
        if (s.size() != 5){
            NO;
            continue;
        }
        for (int i = 0; i < s2.size(); i++){
            bool found = false;
            for (int j = 0; j < s.size(); j++){
                if (s2[i] == s[j]){
                    found = true;
                    break;
                }
            }
            if (!found){
                flag = false;
                break;
            }
        }

        if (flag){
            YES;
        }
        else{
            NO;
        }
    }

    return 0;
}