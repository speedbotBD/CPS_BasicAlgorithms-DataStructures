//
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back

int n;
int a[20];
ll sol(ll indx, ll left, ll right){
    //Base Case
    if(indx == n) return abs(left - right);

    //Body
    ll left_return = sol(indx+1, left+a[indx], right);
    ll right_return = sol(indx+1, left, right+a[indx]);

    return min(left_return, right_return);
}

 
void solve()
{
     //Code Here
     cin >> n;
     for(int i=0;i<n;i++){
        cin >> a[i];
     }

     cout << sol(0, 0, 0) << endl;

   
     
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
