//PL-> https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_B#

#include <bits/stdc++.h>
using namespace std;

void solve() {
   
   int n, k;
   cin >> n >> k;
   
   vector<int> v(n);
   for(auto &it: v)
   cin >> it;
   
   map<int,int> mp;
   
   int need = k;
   int have = 0;
   
   int l = 0;
   int r = 0;
   int ans = INT_MAX;
   
   for(int j=0;j<n;j++){
     
     if(v[r]>=1 && v[r]<=k){
       
       if(mp[v[r]] == 0) have++;
       mp[v[r]]++;
       
     }
     
     
     
     while(have == need){
       
       ans = min(ans, r-l+1);
       
       if(v[l]>=1 && v[l]<=k){
         
         mp[v[l]]--;
         if(mp[v[l]] == 0) have--;
         
       }
       
       l++;
     }
     
     
     r++;
     
   }
   
   if(ans == INT_MAX) cout << "0" << endl;
   else cout << ans << endl;
   
   
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
