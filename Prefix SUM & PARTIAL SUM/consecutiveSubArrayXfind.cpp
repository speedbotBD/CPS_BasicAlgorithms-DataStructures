//Given a Value X, check if any Consecutive SubArray Exist thats Value Equal to X.
//4 4
//1 2 1 3 | Here: 1+2+1=4 and 1+3=4. Then Print "YES".
//If don't Consecutive Print "NO".
//4 4
//1 2 0 3 | Here: 1+3=4. But they aren't Consecutive, So Print "NO".

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
     
     vector<int> v(n+1);
     v[0] = 0;
     for(int i=1;i<=n;i++)
        cin >> v[i];
     
     vector<int> prefixSum(n+1);
     prefixSum[0] = 0;
     for(int i=1;i<=n;i++)
        prefixSum[i] = prefixSum[i-1] + v[i];
     
     map<int, int> mp;
     mp[0] = 1; bool flag = false;
     
     for(int i=1;i<=n;i++){
       
       int LM1 = prefixSum[i] - x;
       if(mp[LM1] == 1){
         flag = true; break;
       }
       mp[prefixSum[i]] = 1;
       
     }
     
     if(flag) cout << "YES" << endl;
     else      cout << "NO" << endl;
     
     
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
