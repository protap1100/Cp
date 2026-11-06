#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countPleasant(const vector<ll>& v) {
    ll sum = 0; int c = 0;
    for (int i = 0; i < (int)v.size(); i++) {
        if (i == 0 || v[i] * i >= sum) c++;
        sum += v[i];
    }
    return c;
}

bool solve(vector<ll> a, int k, vector<ll>& ans) {
    int n = a.size();
    sort(a.begin(), a.end());
    ll mx = a[n - 1];
    int cnt = 0;
    for (int i = 0; i < n; i++) if (a[i] == mx) cnt++;
    if (k < cnt) return false;
    int m = n - cnt, p = k - cnt;
    ans.clear();
    for (int i = m - p; i < m; i++) ans.push_back(a[i]);
    for (int i = 0; i < cnt; i++) ans.push_back(mx);
    for (int i = m - p - 1; i >= 0; i--) ans.push_back(a[i]);
    return true;
}

int main() {
    srand(1);
    for (int it = 0; it < 200000; it++) {
        int n = rand() % 7 + 1;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) a[i] = rand() % 7 - 3;
        int k = rand() % n + 1;

        vector<ll> b = a;
        sort(b.begin(), b.end());
        bool exists = false;
        do { if (countPleasant(b) == k) { exists = true; break; } }
        while (next_permutation(b.begin(), b.end()));

        vector<ll> ans;
        bool got = solve(a, k, ans);
        bool bad = (got != exists) || (got && countPleasant(ans) != k);
        if (bad) {
            printf("FAIL n=%d k=%d a:", n, k);
            for (int i = 0; i < n; i++) printf(" %lld", a[i]);
            puts("");
            return 0;
        }
    }
    return 0;
}