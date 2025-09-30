//https://www.spoj.com/problems/TRUCKL/en/
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back

map<int, int> vis, str;
int cal(int box, int lim){
  
   //Base Case
   if(box <= lim){
    return 1;
   }
   
   
   if(vis[box] == 1){
    return str[box];
   }

   //Body
   int left = box/2;
   int right = box - left;

   int l = cal(left, lim);
   int r = cal(right, lim);
   
   vis[box] = 1;
   str[box] = l + r;
   
   return l+r;
    

}
 
void solve()
{
     //Code Here
     int box, lim;
     while(cin >> box >> lim){
       
         cout << cal(box, lim) << endl;
         vis.clear();
         str.clear();
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
