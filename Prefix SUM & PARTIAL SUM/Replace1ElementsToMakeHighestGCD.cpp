#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n + 1); // 1-based indexing
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<int> pre(n + 1), suf(n + 2);

    // Prefix GCD
    for (int i = 1; i <= n; i++) {
        pre[i] = __gcd(pre[i - 1], v[i]);
        // cout << "pre[" << i << "] = " << pre[i] << endl;
    }

    // Suffix GCD
    for (int i = n; i >= 1; i--) {
        suf[i] = __gcd(suf[i + 1], v[i]);
        // cout << "suf[" << i << "] = " << suf[i] << endl;
    }

    int an = 0;
    for (int i = 1; i <= n; i++) {
        int g = __gcd(pre[i - 1], suf[i + 1]);
        // cout << "Debug: i=" << i 
        //      << ", pre[i-1]=" << pre[i-1] 
        //      << ", suf[i+1]=" << suf[i+1] 
        //      << ", gcd=" << g << endl;
        an = max(an, g);
    }

    cout << "Maximum GCD after removing one element: " << an << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
