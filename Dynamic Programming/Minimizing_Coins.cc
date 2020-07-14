#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int Combinations(vector<int>&arr, int n , int target)
{
	int DP[target+1];
	for(int i=0; i<=target; ++i)
		DP[i]=INT_MAX-1;
	DP[0]=0;
	for(int i=0; i<n;  ++i)
		for(int j=arr[i]; j<=target; ++j)
			DP[j]= min(DP[j], 1+DP[j-arr[i]]);
	return (DP[target]==INT_MAX-1)?-1:DP[target];
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