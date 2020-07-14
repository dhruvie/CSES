#include<bits/stdc++.h>
using namespace std;
#define int long long
int MinSubsetDiff(vector<int>&arr, int n, int Range)
{
	int N=1<<n,ans=INT_MAX;
	for(int i=0; i<N; ++i)
	{
		int sum=0;
		for(int j=0; j<n; ++j)
		{
			if(i&(1<<j))
				sum+=arr[j];
		}
		ans=min(ans,abs(Range-(2*sum)));
	}
	return ans;

}
signed main()
{
	int n,Range=0;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; ++i)
	{
		cin>>nums[i];
		Range+=nums[i];
	}
	cout<<MinSubsetDiff(nums,n,Range);
}