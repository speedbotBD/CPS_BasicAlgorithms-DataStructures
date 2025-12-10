#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back
ll n;

bool pred(ll mid){
  
  ll ans = mid * mid;
  return ans >= n;
  
}


void solve()
{
     //Code Here
     
     cin >> n;
     
     ll l = 1, r = 2000000000;
     ll ans = -1;
     
     while(l<=r){
       
       ll mid = l + (r - l) / 2;
       
       if(pred(mid)){
         
         ans = mid;
         r = mid - 1;
         
       }else{
         l = mid + 1;
       }
       
       
     }
     
    if(ans * ans == n) cout << "YES" << endl;
    else cout << "NO" << endl;
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
