#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int l = 0, r = n - 1;

    while (l < r) {
        // 🔧 apply your condition here
        if (a[l] <= a[r]) {
            l++;
        } else {
            r--;
        }
    }

    return 0;
}
