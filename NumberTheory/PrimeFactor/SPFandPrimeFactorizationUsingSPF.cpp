// SPF and Prime Factorization using SPF
#include <bits/stdc++.h>
 
using namespace std;
 
 
const int N = 1e6+5;
vector<int>primes;
bool isprime[N];
 
int spf[N]; //smallest prime factor
 
void sieve()
{
    for(int i=0; i<N; ++i) isprime[i] = true, spf[i] = i;
 
    for(int i=2; i*i<N; ++i)
    {
        if(isprime[i]==false) continue;
        for(int j=i*i; j<N; j+=i)
        {
            isprime[j] = false;
            if(spf[j]==j) spf[j] = i;
           
        }
    }
    for(int i=2; i<N; ++i)
    {
        if(isprime[i]) primes.push_back(i);
    }
}
 
 
int main()
{
    sieve();
 
   int n; cin>>n;
    //spf[n] diye n vag jay.. 
    while(n>1)
    {
        int x = n;
        int cnt = 0;
        while(n%spf[x] == 0)
        {
            n/=spf[x];
            ++cnt;
        }
 
        cout<<spf[x]<<' '<<cnt<<endl;
    }
}
 