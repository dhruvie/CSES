#include<bits/stdc++.h>
using namespace std;
#define int long long
void Solve(int n)
{
	cout<<n<<" ";
	if(n==1)
		return;
	else if(n&1)
		n=n*3+1;
	else
		n=n/2;
	Solve(n);
}
signed main()
{
	int n;
	cin>>n;
	Solve(n);
}