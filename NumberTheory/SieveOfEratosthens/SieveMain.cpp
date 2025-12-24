#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e6;
 
 
bool isprime[N];
 
int main()
{
    for(int i=2; i<N; ++i) isprime[i] = true;
 
    vector<int>primes = {2};
 
    for(int i=3; i*i<=N; i+=2)
    {
        if(isprime[i]==true)
        {
            for(int j=i*i; j<N; j+=i*2)
            {
                isprime[j] = false;
            }
        }
    }
 
    for(int i=3; i<N; i+=2)
    {
        if(isprime[i]==true) primes.push_back(i);
    }
 
    for(int i=0; i<(int)primes.size(); i++)
    {
        cout<<primes[i]<<'\n';
    }
 
}