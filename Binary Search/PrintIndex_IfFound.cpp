#include <bits/stdc++.h>
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
     
     bool flag = false; int index = -1;
     int l = 0; int r = n-1;
     while(l <= r){
       
       int mid = (l+r)/2;
       if(v[mid] == x){
         index = mid;
         flag = true; break;
       }
       
       if(v[mid] < x){
         l = mid + 1;
       }else{
         r = mid - 1;
       }
       
     }
     
     if(flag) cout << "YES\nIndex-> " << index+1 << endl;
     else cout << "-1" << endl;
     
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
