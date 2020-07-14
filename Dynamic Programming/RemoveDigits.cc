#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
//Greedy Approach

// int RemoveD(int n)
// {
// 	int ans=1;
// 	while(n>9)
// 	{
// 		int x=n,max_d=0;
// 		while(x!=0)
// 		{
// 			max_d=max(x%10,max_d);
// 			x/=10;
// 		}
// 		n-=max_d;
// 		ans++;
// 	}
// 	return ans;
// }

// DP Approach

int RemoveD(int n)
{
	vector<int> DP(n+1,INT_MAX);
	DP[0]=0;
	for(int i=1; i<=n; ++i)
	{
		for(char ch: to_string(i))
			DP[i]=min(DP[i],DP[i-(ch-'0')]+1);
	}
	return DP[n];
}
signed main()
{
	int n;
	cin>>n;
	cout<<RemoveD(n);
}