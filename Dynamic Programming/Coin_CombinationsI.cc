#include<bits/stdc++.h>
using namespace std;
#define int long long
int Combinations(vector<int>&arr, int n , int target)
{
	int DP[n+1][target+1];
	for(int i=0; i<=n;  ++i)
	{
		for(int j=0; j<=target; ++j)
		{
			if(j==0)
				DP[i][j]=1;
			else if(i==0)
				DP[i][j]=0;
			else if(arr[i-1]>j)
				DP[i][j]=DP[i-1][j];
			else
				DP[i][j]=DP[i][j-arr[i-1]]+DP[i-1][j];
		}
	}
	return DP[n][target];
}
signed main()
{
	int n,target;
	cin>>n>>target;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	cout<<Combinations(arr,n,target);
}