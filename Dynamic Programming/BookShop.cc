#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int Knapsack(vector<int>&price,vector<int>&pages,int n,int x)
{
	vector<int> dp(x+1,0);
	for(int i=0; i<n; ++i)
	{
		for(int j=x; j>=price[i]; --j)
			dp[j]=max(dp[j],pages[i]+dp[j-price[i]]);
	}
	return dp[x];
}

// int Knapsack(vector<int>&price, vector<int>&pages,int n, int x)
// {
// 	int DP[n+1][x+1];
// 	for(int i=0; i<=n; ++i)
// 	{
// 		for(int j=0; j<=x; ++j)
// 		{
// 			if(i==0 || j==0)
// 				DP[i][j]=0;
// 			else if(j<price[i-1])
// 				DP[i][j]=DP[i-1][j];
// 			else
// 				DP[i][j]=max(DP[i-1][j-price[i-1]]+pages[i-1], DP[i-1][j]);
// 		}
// 	}
// 	return DP[n][x];
// }
signed main()
{
	int n,x;
	cin>>n>>x;
	vector<int> price(n),pages(n);
	for(int i=0; i<n; ++i)
		cin>>price[i];
	for(int j=0; j<n; ++j)
		cin>>pages[j];
	cout<<Knapsack(price,pages,n,x);
}