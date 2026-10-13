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
    string s;
    cin >> n >> s;
    int a = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if(a > d){
        cout << "Anton";
    }else if(a<d){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
    // cout << a << d;
    return 0;
}