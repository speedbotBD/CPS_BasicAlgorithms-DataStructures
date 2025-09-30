//Find Max SubArray Using Prefix Sum:-
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back

 
void solve()
{
     //Code Here
     ll n;
     cin >> n;
     vector<ll> v(n+1);
     for(int i=1;i<=n;i++)
        cin >> v[i];
    
    vector<ll> pre_sum(n+1);     //Store PrefixSum
    pre_sum[0] = 0;              //Initialize first indx as 0
    
    for(int i=1;i<=n;i++){
        pre_sum[i] = pre_sum[i-1] + v[i];
    }

    ll min_pre_sum = 0;
    ll mx = pre_sum[1];

    for(int i=1;i<=n;i++){
        mx = max(mx, pre_sum[i]-min_pre_sum);
        min_pre_sum = min(min_pre_sum, pre_sum[i]);
    }

    cout << mx << endl;

}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll t;
    // cin >> t;
    // while(t--)
    // {
      solve();
    // }
 
    
    return 0;
}
