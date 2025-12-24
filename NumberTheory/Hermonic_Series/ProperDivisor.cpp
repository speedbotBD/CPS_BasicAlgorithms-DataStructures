#include <bits/stdc++.h>
using namespace std;

const int MAXN = 500000;
long long properSum[MAXN + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Precompute proper divisor sums
    for (int i = 1; i <= MAXN / 2; i++) {
        for (int j = i * 2; j <= MAXN; j += i) {
            properSum[j] += i;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << properSum[n] << '\n';
    }

    return 0;
}
