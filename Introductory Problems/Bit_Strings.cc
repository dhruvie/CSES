#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int Solve(int n)
{
	int res=1,x=2;
	while(n!=0)
	{
		if(n&1)
			res=((res%Mod)*(x%Mod))%Mod;
		x=((x%Mod)*(x%Mod))%Mod;
		n>>=1;
	}
	return res;
}
signed main()
{
	int n;
	cin>>n;
	cout<<Solve(n);
}