#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void solve() {
   
  int n;
  cin >> n;
  
  vector<int> NOD(n+1,0);
  
  for(int i=1;i<=n;i++){
    
    for(int j=i;j<=n;j+=i){
      
      NOD[j]++;
      
    }
    
  }
  
  for(int i=1;i<=n;i++){
    
    if(NOD[i] == 2)
    
    cout << i << " -> " << NOD[i] << endl;
  } 
 
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    solve();
    return 0;
}
