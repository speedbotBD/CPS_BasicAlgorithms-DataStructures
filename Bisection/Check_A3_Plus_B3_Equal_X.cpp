//PL-> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/N

#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back



void solve()
{
     //Code Here
     ll x;
     cin >> x;
     
     vector<ll> v;
     for(int i=1;i<10005;i++){
       v.push_back(1ll*i*i*i);
     }
     
     for(int i=0;i<v.size();i++){
       ll val = v[i];
       ll rem = x - val;
       
       if(rem <= 0) continue;
       
       auto it = lower_bound(v.begin(), v.end(), rem);
       
       if(*it == rem){
         cout << "YES" << endl; return;
       }
       
     }
     
     cout << "NO" << endl;
     
  
     
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
