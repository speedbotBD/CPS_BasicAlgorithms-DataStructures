//Prime Factorization using SQRT(n) loop for all "Primes" not more than sqrt(n)
#include <bits/stdc++.h>
 
using namespace std;
 
 
const int N = 1e6+5;
vector<int>primes;
bool isprime[N];
 
void sieve()
{
    for(int i=0; i<N; ++i) isprime[i] = true;
    for(int i=2; i*i<N; ++i)
    {
        if(isprime[i]==false) continue;
        for(int j=i*i; j<N; j+=i)
        {
            isprime[j] = false;
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
 
    for(auto p:primes)
    {
        if(p*p >n) break;
        if(n%p>0) continue;
 
        int x = 0;
        while(n%p == 0)
        {
            ++x;
            n/=p;
        }
        cout<<p<<' '<<x<<endl;
    }
 
    if(n>1) cout<<n<<' '<<1<<endl;
}
 
 