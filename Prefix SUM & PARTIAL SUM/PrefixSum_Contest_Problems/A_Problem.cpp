//https://codeforces.com/problemset/problem/816/B

#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back
vector<ll> v(200005);

void solve()
{
     //Code Here
     ll n, k, q;
     cin >> n >> k >> q;
     
     
     
     while(n--){
       ll a, b;
       cin >> a >> b;
       
       v[a]++;
       v[b+1]--;; 
     }
     
    for(ll i=1;i<200005;i++){
      v[i]+=v[i-1];
    }
    
    for(int i=1;i<200005;i++){
      if(v[i]>=k) v[i] = 1;
      else v[i] = 0;
    }
    
    for(int i=1;i<200005;i++){
      v[i] +=v[i-1];
    }
    
    
    while(q--){
       
       ll c, d;
       cin >> c >> d;
       
       cout << v[d] - v[c-1] << endl;
       
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
