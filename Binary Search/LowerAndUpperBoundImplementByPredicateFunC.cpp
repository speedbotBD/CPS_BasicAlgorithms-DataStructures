// Lower_Bound Implementation With Predicate Function
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back


int n, x;
int arr[10005];


bool pred(int mid){
  
  if(arr[mid] >= x) return true; //For Upper_Bound 
  else return false;             //arr[mid] > x 
  
}
 
 
void japan()
{
     //Code Here
     cin >> n >> x;
     for(int i=0;i<n;i++){
       cin >> arr[i];
     }
     
     int l = 0, r = n-1;  int ans = -1;
     while(l<=r){
       
       int mid = (l+r)/2;
       
       if(pred(mid)){
         
         ans = arr[mid];
         r = mid - 1;
       }else{
         
         l = mid + 1;
         
       }
       
     }
     
     cout << ans << endl;
}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)
    {
      japan();
    }
 
    
    return 0;
}

