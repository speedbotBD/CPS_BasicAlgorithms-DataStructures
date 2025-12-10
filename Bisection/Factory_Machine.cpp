#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
vector<ll> v;

bool isOk(ll mid){
  
  ll ans = 0;
  
  for(ll i=0;i<n;i++){
    ans += mid/v[i];
    if(ans >= k) return true;
  }
  
  return false;
  
}

int main()
{
	
	cin >> n >> k;

	for(ll i=0;i<n;i++){
	  ll a; cin >> a;
	  v.push_back(a);
	}
	
	ll l = 1, r = 1e18;
	ll ans = -1;
	
	while(l<=r){
	  
	  ll mid = l + (r - l) / 2;
	  
	  if(isOk(mid)){
	    
	    ans = mid;
	    r = mid - 1;
	    
	  }else{
	    
	    l = mid + 1;
	    
	  }
	  
	  
	}
	
	cout << ans << endl;
	
}