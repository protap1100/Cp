#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int r = n - k;

        if (r == 1) {
            cout << -1 << "\n";
            continue;
        }

        int zero = n / 2;
        int one = n - zero;

        int r0, r1;

        if (r % 2 == 0) {
            r0 = r / 2;
            r1 = r / 2;
        }
        else {
            r0 = (r + 1) / 2;
            r1 = r / 2;
        }

        if (r0 > zero || r1 > one) {
            r0 = r / 2;
            r1 = (r + 1) / 2;
        }

        string s = "";

        int z = zero;
        int o = one;

        for (int i = 0; i < r; i++) {
            if (i % 2 == 0) {
                s = s + string(1, '0');

                z--;
            }
            else {
                s = s + string(1, '1');

                o--;
            }
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0' && z > 0) {
                while (z > 0 && i + 1 < s.length() && s[i + 1] == '0') {
                    s[i] = s[i] + '0';
                    z--;
                }
            }
        }

        // Easier construction from scratch
        s = "";

        int a = zero / r0;
        int b = zero % r0;

        int c = one / r1;
        int d = one % r1;

        int x = 0, y = 0;

        for (int i = 0; i < r; i++) {
            if (i % 2 == 0) {
                int len = a;

                if (x < b)
                    len++;

                x++;

                s += string(len, '0');
            }
            else {
                int len = c;

                if (y < d)
                    len++;

                y++;

                s += string(len, '1');
            }
        }

        cout << s << "\n";
    }

    return 0;
}