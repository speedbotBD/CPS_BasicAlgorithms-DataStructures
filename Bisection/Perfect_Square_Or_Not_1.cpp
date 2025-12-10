#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	long long A;
	cin>>A;
 
	long long B = roundl(sqrtl(A*1.0));
 
	if(B*B == A) cout<<"YES\n";
	else cout<<"NO\n";
 
	return 0;
}