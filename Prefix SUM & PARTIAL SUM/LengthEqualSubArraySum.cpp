//How Many subArray Possible?
//Where Length = SubArray Sum
//4
//1 1 0 1 -> 1=1, 1=1, 1+1=2, 1=1 | Here: 4 SubArray Possible Where Len = SubArr Sum 

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
     v[0] = 0;
     for(int i=1;i<=n;i++)
        cin >> v[i];
     
     vector<int> nw(n+1);
     for(int i=1;i<=n;i++){
       nw[i] = v[i] - 1;
     }
     
     vector<int> pre(n+1);
     for(int i=1;i<=n;i++){
       pre[i] = nw[i] + pre[i-1];
     }
     
     long long an = 0;
     map<int,int> mp;
     mp[pre[0]] = 1;
     for(int R=1;R<=n;R++){
       an+=mp[pre[R]];
       mp[pre[R]]++;
     }
     
     
     cout << an << endl;
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
