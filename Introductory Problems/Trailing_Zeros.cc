#include<bits/stdc++.h>
using namespace std;
#define int long long
int Solve(int n)
{
	int x=5,ans=0;
	while(x<=n)
	{
		ans+=(n/x);
		x=x*5;
	}
	return ans;
}
signed main()
{
	int n;
	cin>>n;
	cout<<Solve(n);
}