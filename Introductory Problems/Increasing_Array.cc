#include<bits/stdc++.h>
using namespace std;
#define int long long
int Solve(vector<int>&nums, int n)
{
	int ans=0;
	for(int i=1; i<n; ++i)
	{
		if(nums[i]>=nums[i-1])
			continue;
		ans+=(nums[i-1]-nums[i]);
		nums[i]=nums[i-1];
	}
	return ans;
}
signed main()
{
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; ++i)
		cin>>nums[i];
	cout<<Solve(nums,n);
}