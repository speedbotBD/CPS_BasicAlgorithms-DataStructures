//Problem Link-> https://leetcode.com/problems/sqrtx/description/

#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back

bool pred(int mid, int x){
  if(mid * mid > x) return true;
  else return false;
}

void solve()
{
     //Code Here
     int n;
     cin >> n;

     int l = 0, r = n;
     int ans = -1;
     while(l<=r){

     int mid  = (l + r) / 2;

     if(pred(mid, n)){
         ans = mid;
         r = mid - 1;
     }else{
      l = mid + 1;
     }


     }

     cout << ans - 1 << endl;
     
    
     
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
