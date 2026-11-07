#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

ll GCD(ll a, ll b) {
    while (b != 0) {
        ll temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main() {
    FAST

    int t;
    cin >> t;

    vector<int> prime;

    for (int x = 2; prime.size() < 100005; x++) {
        bool ok = true;

        for (int j = 0; j < prime.size(); j++) {
            int p = prime[j];

            if (1LL * p * p > x) {
                break;
            }

            if (x % p == 0) {
                ok = false;
                break;
            }
        }

        if (ok) {
            prime.push_back(x);
        }
    }

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            ll p = prime[i];

            ll rem = a[i] % p;

            if (rem == 0) {
                continue;
            }

            ll x = p - rem;

            if (GCD(a[i], x) == 1) {
                a[i] += x;
            }
            else {
                a[i] += x + p;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }

        cout << nl;
    }

    return 0;
}