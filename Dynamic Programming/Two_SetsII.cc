#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int Combination(vector<int>&arr, int n, int target)
{
	int DP[n+1][target+1];
	for(int i=0; i<=n; ++i)
	{
		for(int j=0; j<=target; ++j)
		{
			if(j==0)
				DP[i][j]=1;
			else if(i==0)
				DP[i][j]=0;
			else if(j<arr[i-1])
				DP[i][j]=DP[i-1][j];
			else
				DP[i][j]=(DP[i-1][j-arr[i-1]]%Mod + DP[i-1][j]%Mod);
		}
	}
	return DP[n][target]/2;
}
signed main()
{
	int n,target;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		arr[i]=i+1;
	target=(n*(n+1))/2;
	if(target&1)
		cout<<0;
	else
	{
		target/=2;
		cout<<Combination(arr,n,target);
	}
}
	