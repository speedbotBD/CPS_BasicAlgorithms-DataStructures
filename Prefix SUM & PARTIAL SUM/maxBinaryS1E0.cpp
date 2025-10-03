//Start with 1 and end with 0. How many max subArray Possible?
// 8
// 0 1 1 0 1 1 0 1
//output-> 6
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
     vector<int> v(n);  map<int,int> mp;
     for(int i=0;i<n;i++){
       int a; cin >> a;
       v[i] = a;
     }
     
     int ans = 0;
     for(int i=0;i<n;i++){
        mp[v[i]]++;
       if(v[i] == 0){
         ans += mp[1];
       }
     }
     
     cout << ans << endl;
    
     
     
}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
      solve();
    
    
    return 0;
}
