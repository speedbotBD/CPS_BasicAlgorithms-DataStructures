//https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back


void calculate(ll n){
  
    //Base Case
    if(n == 1){
        cout << n; return;
    } 

    //Body
    cout << n << " ";

    if(n%2==0){
        calculate(n/2);
    }else{
        calculate((n*3)+1);
    }
}
 
 
 
void solve()
{
     //Code Here
     ll n;
     cin >> n;
     
     calculate(n);
     
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
