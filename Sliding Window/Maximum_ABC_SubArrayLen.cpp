// input:
// 12
// adabcdacacab
//       ______
// output:
// 6


#include <bits/stdc++.h>
using namespace std;

int main() 
{
   
   int n;
   cin >> n;
   
   string v;
   cin >> v;
   
  
   map<char, int> mp;
   int l=0, r=0;
   int ans = 0;
   
   while(r<n){
     
       if(v[r] == 'a' || v[r] == 'b' ||
          v[r] == 'c'){
           
           r++;
            
          }else{
             r++;
            l = r;
          }
          
          ans = max(ans, r-l);
   }
   
   
   cout << ans << endl;
    return 0;
}