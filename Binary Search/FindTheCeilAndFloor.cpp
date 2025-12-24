#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back
#define yes           cout << "YES" << endl;
#define no            cout << "NO" << endl;


void solve()
{
     //Code Here//
     int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(auto &it: v) cin >> it;

    sort(v.begin(), v.end());  

    int l = 0, r = n - 1;
    int c = -1, f = -1;

    // Ceil
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(v[mid] >= x){
            c = v[mid];
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    l = 0, r = n - 1;

    // Floor
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(v[mid] <= x){
            f = v[mid];
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    cout << "Ceil-> " << c << " Floor-> " << f << endl;
    
}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


     int t;
     cin >> t;
     while(t--)
      
      solve();
      
    
 
    
    return 0;
}
