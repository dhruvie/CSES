#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> Solve(vector<int>&nums, int n, int x)
{
	unordered_map<int,int>hash;
	for(int i=0; i<n; ++i)
		hash[nums[i]]=i;
	for(int i=0; i<n; ++i)
	{
		for(int j=i+1; j<n; ++j)
		{
			for(int k=j+1; k<n; ++k)
			{
				int val=x-(nums[i]+nums[j]+nums[k]);
				if(hash.find(val)!=hash.end())
				{
					if(hash[val]!=i && hash[val]!=j && hash[val]!=k)
					return {i+1,j+1,k+1,hash[val]+1};
				}
			}
		}
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
		cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3];
}