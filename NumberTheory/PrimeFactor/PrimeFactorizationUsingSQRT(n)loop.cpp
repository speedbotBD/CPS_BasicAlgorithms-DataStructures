//Prime Factorization using SQRT(n) loop for all "numbers" not more than sqrt(n)
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin>>n;
 
    for(int i=2; i*i<=n; ++i)
    {
        if(n%i>0) continue;
        int x = 0;
        while(n%i == 0)
        {
            ++x;
            n/=i;
        }
        cout<<i<<' '<<x<<endl;
    }
 
    if(n>1) cout<<n<<' '<<1<<endl;
}
 