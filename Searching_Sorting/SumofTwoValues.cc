#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> Solve(vector<int>&nums, int n, int x)
{
	map<int,int>hash;
	for(int i=0; i<n; ++i)
	{
		if(hash.find(x-nums[i])!=hash.end())
			return {i+1,hash[x-nums[i]]+1};
		hash[nums[i]]=i;
	}
	return {};
}
signed main()
{
	int n,x;
	cin>>n>>x;
	vector<int> nums(n);
	for(int i=0; i<n; ++i)
		cin>>nums[i];
	vector<int> ans;
	ans=Solve(nums,n,x);
	if(ans.empty())
		cout<<"IMPOSSIBLE";
	else
		cout<<ans[0]<<" "<<ans[1];
}