// input:
// 5
// 1 2 3 4 1
// output:
// 4

#include <bits/stdc++.h>
using namespace std;

int main() 
{
   
   int n;
   cin >> n;
   
   vector<int> v(n);
   for(int i=0;i<n;i++)
   cin >> v[i];
   
   map<int,int> mp;
   int l=0, r=0;
   int ans = 0;
   
   while(r<n){
     
       mp[v[r]]++;
       
       if(mp[v[r]] > 1){
         while(mp[v[r]] > 1){
           mp[v[l]]--;
           l++;
         }
       }
     
     ans = max(ans, r-l+1);
     r++;
   }
   
   
   cout << ans << endl;
    return 0;
}