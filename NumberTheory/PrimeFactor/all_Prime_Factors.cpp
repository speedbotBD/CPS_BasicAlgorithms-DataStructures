//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=524

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
   
   ll m = n;
   
   if(n==0) break;
   vector<ll> factors;
   
   if(n<0)
   {
     factors.push_back(-1);
     n = -n;
   }
   
  
     for(auto &p: v)
   {
     
     if(1LL*p*p > n) break;
     if(n==1) break;
     if(n%p > 0) continue;
     
     while(n%p==0)
     {
       n/=p;
       factors.push_back(p);
     }
   }
   
   if(n>1)
   {
      factors.push_back(n);
   }
     
   
   
   cout << m << " = ";
   for(int i=0;i<factors.size();i++)
   {
     cout << factors[i];
     if(i != factors.size()-1)
     {
       cout << " x ";
     }
   }
   
   cout << endl;

   
   
   
   
}

}
   
   
   
   
