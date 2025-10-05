//Given a Value X, check if any Consecutive SubArray Exist thats Value Equal to X.
//4 4
//1 2 1 3 | Here: 1+2+1=4 and 1+3=4. Then Print Count-> 2.
//If don't Consecutive Print Count-> 0.
//4 4
//1 2 0 3 | Here: 1+3=4. But they aren't Consecutive, So Print Count-> 0.
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, x;
    cin >> n >> x;
     
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
        cin >> v[i];
     
    vector<int> prefixSum(n+1);
    prefixSum[0] = 0;
    for(int i=1;i<=n;i++)
        prefixSum[i] = prefixSum[i-1] + v[i];
     
    map<int, int> mp;
    mp[0] = 1;  // prefixSum[0] = 0 initially present
    ll cnt = 0;
     
    for(int i=1;i<=n;i++){
        int need = prefixSum[i] - x;
        if(mp.count(need))
            cnt += mp[need];   // found subarray(s) with sum = x
        
        mp[prefixSum[i]]++;    // store current prefix
    }
     
    cout << cnt << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
