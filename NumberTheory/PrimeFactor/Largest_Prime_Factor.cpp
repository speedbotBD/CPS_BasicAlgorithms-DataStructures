// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2461

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll N = 1e7+5;
bool isPrime[N];
vector<ll> v;

void seive()
{ 
  for(int i=0;i<N;i++) isPrime[i] = true;
  
  isPrime[0] = isPrime[1] = false;
  
  for(ll i=2;i*i<N;i++)
  {
    if(!isPrime[i]) continue;
    
    for(ll j=i*i;j<N;j+=i)
    {
      isPrime[j] = false;
    }
    
  }
  
  for(int i=2;i<N;i++)
  {
    if(isPrime[i]) v.push_back(i);
  }
  
  
}
 
int main()
{ 
   seive();
   
   while(true)
   {
   long long n;
   cin >> n;
   ll lpf = 0;
   
   if(n==0) break;
   if(n<0) n = -n;
   
   int cnt = 0;
   for(auto &p: v)
   {
     if(1LL*p*p > n) break;
     if(n%p > 0) continue;
     lpf = p;
     cnt++;
      
     while(n%p==0)
     {
       n/=p;
     }
   }
   
   if(n>1)
   {
     cnt++;
     lpf = n;
   }
   
   if(cnt<=1)
   cout << -1 << endl;
   else
   cout << lpf << endl;
   }
   
   
   
   
}