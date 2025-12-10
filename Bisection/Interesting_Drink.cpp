//PL-> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/E

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
     vector<int> v(n);
     for(auto &it: v)
        cin >> it;
      
     sort(v.begin(), v.end());
     
     int q;
     cin >> q;

     while(q--){
     int m;
     cin >> m;
     
     int ans = -1;

     int l = 0, r = n-1;

     while(l<=r){
      
      int mid = l + (r-l)/2;

      if(v[mid] <= m){
        ans = mid;
        l = mid + 1;
      }else{
        r = mid - 1;
      }


     }

     if(ans == -1) cout << 0 << endl;
     else cout << ans - 0 + 1 << endl;

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
