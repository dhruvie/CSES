#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int power(int a, int b)
{
	int res=1;
	while(b!=0)
	{
		if(b&1)
			res=((res%Mod) * (a%Mod))%Mod;
		a=((a%Mod) * (a%Mod))%Mod;
		b>>=1;
	}
	return res;
}
signed main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<power(a,b)<<endl;
	}
}