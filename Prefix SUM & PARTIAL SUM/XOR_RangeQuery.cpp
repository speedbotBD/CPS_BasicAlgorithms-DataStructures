#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back


void solve()
{
     //Code Here
     int n, q;
     cin >> n >> q;
     
     vector<int> v(n+1);
     v[0] = 0;
     for(int i=1;i<=n;i++)
        cin >> v[i];
    
    vector<int> prefix(n+1);
    prefix[0] = 0;
    for(int i=1;i<=n;i++){
      prefix[i] = prefix[i-1] ^ v[i];
      
    }
    
    
    while(q--){
      int l, r;
      cin >> l >> r;
      
      ll ans = prefix[r] ^ prefix[l-1];
      cout << ans << endl;
      
    }
  
}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)
    {
      solve();
    }
 
    
    return 0;
}
