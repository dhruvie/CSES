#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int modI(int d1,int d2)
{
	int x1=1,x2=0,temp,k;
	while(d2>1)
	{
		k=d1/d2;

		temp=x2;
		x2=x1-(k*x2);
		x1=temp;

		temp=d2;
		d2=d1-(k*d2);
		d1=temp;
	}
}
signed main()
{
	int n,ans=0;
	cin>>n;
	int x=sqrt(n);
	for(int i=1; i<=x; ++i)
	{
		if((i*i)==n)
			ans=((ans%Mod)+i%Mod)%Mod;
		else if((n%i)==0)
		{
			// int Z=modI(i,Mod);
			ans=((ans%Mod)+(i%Mod))%Mod;
			// ans=((ans%Mod)+(((Z%Mod)*(n%Mod))%Mod))%Mod;
			ans=((ans%Mod)+(n/i)%Mod)%Mod;
		}
	}
	cout<<ans;
}