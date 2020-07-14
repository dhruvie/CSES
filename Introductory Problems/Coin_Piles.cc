#include<bits/stdc++.h>
using namespace std;
#define int long long
bool Solve(int a, int b)
{
	int X=(2*a-b),Y=(2*b-a);
	if(X<0 || Y<0)
		return false;
	return (X%3 || Y%3)?false:true;	
}
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(Solve(a,b))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}