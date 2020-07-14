#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int DiceCombinations(vector<int>&arr, int n , int target)
{
	vector<int>DP(target+1,0);
	DP[0]=1;
	for(int i=1; i<=target;  ++i)
		for(int j=0; j<n; ++j)
			if(arr[j]<=i)
				DP[i]= (DP[i]+DP[i-arr[j]])%Mod;
	return DP[target];
}
signed main()
{
	int target;
	cin>>target;
	vector<int> arr(6);
	for(int i=0; i<6; ++i)
		arr[i]=i+1;
	cout<<DiceCombinations(arr,6,target);
}