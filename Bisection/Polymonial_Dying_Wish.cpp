//PL-> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/?purpose=login&source=problem-page&update=google

#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back
 ll a, b, c, k;
 
bool pred(ll mid){
  
 ll ans = (a*(mid*mid)) + b*mid + c;
 
 if(ans >= k) return true;
 return false;
  
}

void solve()
{
     //Code Here
    
     cin >> a >> b >> c >> k;
     
     ll l = 0, r = 200000;
     ll ans = -1;
     while(l<=r){
       
       ll mid = l + (r - l)/2;
       
       if(pred(mid)){
         
         ans = mid;
         r = mid - 1;
         
       }else{
         
         l = mid + 1;
         
       }
       
       
     }
     
     cout << ans << endl;
     
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
