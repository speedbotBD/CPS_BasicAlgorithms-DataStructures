
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back



 
 
 
void japan()
{
     //Code Here
     int n, x;
     cin >> n >> x;
     
     vector<int> v(n+1);
     for(int i=0;i<n;i++){
       cin >> v[i];
     }
     
    //Lower_Bound
    cout << 
    "lower_bound Val-> " << *lower_bound(v.begin(), v.end(), x) << endl;
    cout << 
    "lower_bound Pos-> " << (lower_bound(v.begin(), v.end(), x) - v.begin()) << endl;
    
    
    //Upper_Bound
    cout << 
    "Upper_bound Val-> " << *upper_bound(v.begin(), v.end(), x) << endl;
    cout << 
    "Upper_bound Pos-> " << (upper_bound(v.begin(), v.end(), x) - v.begin()) << endl;
 
    
    
    //If Dont Found Bot Upper & Lower Bound 
    //Return -> n, Which Mean Not range into Array
    
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

