//PL-> https://cses.fi/problemset/task/2428/
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back
#define yes           cout << "YES" << endl;
#define no            cout << "NO" << endl;
 
 
 
 
 
void solve()
{
    //Code Here
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &it: v){
      cin >> it;
    }
    
    map<int,int> mp;
    long long ans = 0;
    
    int l=0, r=0;
    mp[v[0]] = 1;
    
    while(r<n){
      
      if(mp.size() > k){
        mp[v[l]]--;
        if(mp[v[l]] == 0)  
        mp.erase(v[l]);
        l++;
      }else{
        ans+=(r-l+1);
        r++;
        if(r>=n) break;
        mp[v[r]] = mp[v[r]] + 1;
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