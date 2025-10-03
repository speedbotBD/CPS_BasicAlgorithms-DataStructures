//Max SubAraay sum ans .. koyta ase ..oitar count ber kora lagbe

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
     map<int,int> mp;
     
     for(int i=1;i<=n;i++){
       int a;
       cin >> a;
       v[i] = a; mp[a]++;         //Map for How many single max SubArray Possible
     }
     
     vector<int> prefix(n+1);      //Calculate PrefixSum
     prefix[0] = 0;
     for(int i=1;i<=n;i++){
       prefix[i] = prefix[i-1] + v[i];
     }
     
     int mx = prefix[1];          //Assume mx = prefix[1]
     int min_prefix = 0;          //Assume min_prefix = 0
     
     for(int i=1;i<=n;i++){       //calculate Max SumArray Sum
       mx = max(mx, prefix[i] - min_prefix);
       min_prefix = min(min_prefix, prefix[i]);
     }
      
      cout << "Max-> " << mx << endl;
      int ansMax = mx;            //Store Max SubArray Sum Into ansMax
      mx = prefix[1];             //Again Assume, mx = prefix[1]
      min_prefix = 0;             //Again Assume, min_prefix = 0
      
      int cnt  = 0;               //"cnt" for, store how many max SubArray as possible
     
      for(int i=1;i<=n;i++){      //calculate how many max subArray Sum Possible
        
       mx = max(mx, prefix[i] - min_prefix);
       min_prefix = min(min_prefix, prefix[i]);
       
       if(prefix[i] - min_prefix == ansMax){
         cnt ++;
       }
     }
     
     
     cout << "Cnt-> " << cnt + mp[ansMax] << endl;     
     
     cout << "Map Cnt-> " << mp[ansMax] << endl;
     
    
    
     
     
}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
      solve();
    
    
    return 0;
}
