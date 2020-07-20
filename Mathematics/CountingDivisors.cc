#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
const int N=1000000;
vector<int> p(N+1,1);
void solve()
{
	for(int i=2; i<=N; ++i)
	{
		for(int j=i; j<=N; j+=i)
			p[j]++;
	}
}
signed main()
{
	solve();
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=0;
		cin>>n;
		cout<<p[n]<<" ";
	}
}