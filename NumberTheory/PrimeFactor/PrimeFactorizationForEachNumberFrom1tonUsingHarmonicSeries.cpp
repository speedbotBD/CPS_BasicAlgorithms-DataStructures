//Prime Factorization for each number from 1 to n using harmonic series
#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e6+6;
 
vector<int> primefactors[N];
bool isprime[N];
void harmonic()
{
    for(int i=1; i<N; ++i) isprime[i] = true;
 
    for(int i=2; i<N; ++i)
    {
        if(isprime[i] == false) continue;
 
        primefactors[i].push_back(i);
 
        for(int j=i+i; j<N; j+=i)
        {
            isprime[j] = false;
            int x = j;
            while(x%i == 0)
            {
                x/=i;
                primefactors[j].push_back(i);
            }
        }
    }
}
 
 
 
 
int main()
{
    harmonic();
    for(auto i:primefactors[200]) cout<<i<<endl;
}
 