#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int Combinations(vector<int>&arr, int n , int target)
{
	vector<int> DP(target+1);
	DP[0]=1;
	for(int i=1; i<=target;  ++i)
	{
		for(int j=0; j<n; ++j)
			if(arr[j]<=i)
				DP[i]= (DP[i] + DP[i-arr[j]])%Mod;
	}
	return DP[target];
}
signed main()
{
	ios::sync_with_stdio(0);
  	cin.tie(0);
	int n,target;
	cin>>n>>target;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	cout<<Combinations(arr,n,target);
}