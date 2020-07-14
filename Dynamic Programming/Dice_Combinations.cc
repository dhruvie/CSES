#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
// int Combinations(vector<int>&arr, int n , int target)
// {
// 	int DP[target+1];
// 	for(int i=0; i<=target; ++i)
// 		DP[i]=INT_MAX-1;
// 	DP[0]=0;
// 	for(int i=0; i<n;  ++i)
// 		for(int j=arr[i]; j<=target; ++j)
// 			DP[j]= min(DP[j], 1+DP[j-arr[i]]);
// 	return (DP[target]==INT_MAX-1)?-1:DP[target];
// }
int DiceCombinations(vector<int>&arr, int n, int target)
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
				DP[i][j]=DP[i][j-arr[i-1]]+DP[i-1][j];
		}
	}
	return DP[n][target];
}
signed main()
{
	int n,target;
	cin>>n;
	target=n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		arr[i]=i+1;
	cout<<DiceCombinations(arr,n,target);
}