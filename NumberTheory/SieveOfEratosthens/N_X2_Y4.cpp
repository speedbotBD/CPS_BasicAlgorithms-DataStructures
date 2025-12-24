//www . spoj.com/problems/HS08PAUL/
#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 10000000;
bool isprime[N];
int presum[N];
 
 
void sieve()
{
    for(int i=1; i<N; ++i) isprime[i] = true;
 
    for(int i=2; i*i<N; ++i)
    {
        if(isprime[i])
        {
            for(int j=i*i; j<N; j+=i)
            {
                isprime[j] = false;
            }
        }
    }
 
    for(int i=2; i<N; ++i)
    {
        if(isprime[i])
        {
            //i ekta prime
            //i ke x^2 + y^4 akare prokash kora jay kina check
 
            //y = 1,2,3... try korbo
 
            for(int y=1; y*y*y*y<i; ++y)
            {
                int val = i-(y*y*y*y);
                //val perfect square ki na
                int sq = sqrt(val);
                if(sq*sq == val) //perfect square
                {
                    //i ke x^2+y^4 akare prokash kora jay
 
                    presum[i] = 1;
                    break;
                }
            }
        }
    }
 
    for(int i=3; i<N; ++i) presum[i] += presum[i-1];
 
 
}
 
 
 
int main()
{
    sieve();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<presum[n]<<'\n';
    }
}