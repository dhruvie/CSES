#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int Combinations(vector<int>&arr, int n , int target)
{
	int DP[target+1];
	memset(DP,0,sizeof(DP));
	DP[0]=1;
	for(int i=0; i<n;  ++i)
	{
		for(int j=arr[i]; j<=target; ++j)
			DP[j]= (DP[j]%Mod + DP[j-arr[i]]%Mod)%Mod;
	}
	return DP[target];
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