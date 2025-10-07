#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back


 
void solve()
{
     //Code Here
     int n, x;
     cin >> n >> x;
     vector<int> v(n);
     for(int i=0;i<n;i++){
       cin >> v[i];
     }
     
     int index = -1;
     int l = 0; int r = n-1;
     while(l <= r){
       
 
       int mid = (l+r)/2;   
       if(v[mid] == x){
         index = mid;
         r = mid - 1;  // l = mid + 1;
       }
       
       else if(v[mid] < x){
         l = mid + 1;
       }else{
         r = mid - 1;
       }
       
     }
     
    cout << index << endl;
     
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
