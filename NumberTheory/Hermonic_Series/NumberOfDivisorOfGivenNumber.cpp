#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back
#define yes           cout << "YES" << endl;
#define no            cout << "NO" << endl;

vector<int> NOD(100005,0);

void divisor(){
  
   int n = 100005;
   
   for(int i=1;i<=n;i++){
    
    for(int j=i;j<=n;j+=i){
      
      NOD[j]++;
      
    }
    
  }
  
}
 
 
void solve()
{
    //Code Here
  
 
  int a;
  cin >> a;
  cout << NOD[a] << endl;
     
}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
      
      
      divisor();
      int t;
      cin >> t;
      while(t--)
      solve();
    
 
    
    return 0;
}

