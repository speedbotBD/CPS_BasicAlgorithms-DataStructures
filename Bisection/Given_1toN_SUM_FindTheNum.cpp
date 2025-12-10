//PL-> https://www.spoj.com/problems/MATHLOVE/

#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back

bool pred(ll mid, ll n){
  
  ll ans = (mid * (mid+1)) / 2;
  
  if(ans >= n) return true;
  return false;
  
}

void solve()
{
     //Code Here
     ll n;
     cin >> n;
     
     ll l = 0, r = n;
     ll res = -1;
     
     while(l<=r){
       
       ll mid = (l+r) / 2;
       
       ll ans = (mid * (mid+1)) / 2;
       
       if(pred(mid, n)){
         res = mid;
         r = mid - 1;
       }else{
         l = mid + 1;
       }
       
       
       
     }
     
       ll ans = (res * (res+1)) / 2;
     
     if(ans == n){
       cout << res << endl;
     }else{
       cout << "NAI" << endl;
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
