#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    vector<int> divisors;

    for (int i = 1; i <= a; i++) {
        for (int j = i; j <= a; j += i) {
            if (j == a) {
                divisors.push_back(i);
            }
        }
    }

    for (int x : divisors)
        cout << x << " ";
    cout << "\n";

    return 0;
}
