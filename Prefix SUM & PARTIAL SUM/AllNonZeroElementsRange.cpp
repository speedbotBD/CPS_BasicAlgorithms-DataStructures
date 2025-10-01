//Question:
// Giver n size Array, input from user. We Have q Qures
// with range l to r and a value x that ensure add all the range elements.
// Print the Final Array.

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
    
    int arr[n+2] = {0};
    for(int i=1;i<=n;i++){
      int v;
      cin >> v;
      
      arr[i] += v;
      arr[i+1] -= v;
    }
    
    while(q--){
      
      int a, b, x;
      cin >> a >> b >> x;
        
      arr[a] = arr[a] + x;
      if(b+1 <= 7){
        arr[b+1] = arr[b+1] - x;
      }
      
      
    }
    
    vector<int> preSum(7);
    for(int i=1;i<7;i++){
      preSum[i] = preSum[i-1] + arr[i];
    }
   
   
   for(int i=1;i<=n;i++){
     cout << preSum[i] << " ";
   }
     
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
