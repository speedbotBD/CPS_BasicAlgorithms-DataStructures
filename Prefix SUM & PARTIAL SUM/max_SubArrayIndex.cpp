//Max SubArray Sum Index => l to r
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back


void solve()
{
     //Code Here
     int n;
     cin >> n;
     
     vector<int> v(n+1);
     for(int i=1;i<=n;i++){
       cin >> v[i];
     }
     
     vector<int> pre_sum(n+1);
     pre_sum[0] = 0;
     for(int i=1;i<=n;i++){
       pre_sum[i] = pre_sum[i-1] + v[i];
     }
    
     int mx = pre_sum[1]; 
     int min_pre = 0; 
     
     int l = 1, r = 1;                     //Assume, 1st Element is Max
     int index_of_min_preSum = 0;          //Assume, Index-> 0
     
     for(int i=1;i<=n;i++){
       
       if(pre_sum[i] - min_pre > mx){      //Manually Max Check
         mx = pre_sum[i] - min_pre;  
         r = i;
         l = index_of_min_preSum + 1;      //Index Update
       }
       
       if(pre_sum[i] < min_pre){
         min_pre = pre_sum[i];
         index_of_min_preSum = i;           //Min Index Update
       }
       
      // mx = max(mx, pre_sum[i] - min_pre);
      //min_pre = min(min_pre, pre_sum[i]);
     }
   
     cout << mx << endl;
     cout << l << " " << r << endl;
     
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
