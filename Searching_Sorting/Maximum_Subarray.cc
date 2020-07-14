#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n,sum=0,ans=INT_MIN;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; ++i)
		cin>>nums[i];
	for(int i=0; i<n; ++i)
	{
		sum+=nums[i];
		ans=max(sum,ans);
		if(sum<0)
			sum=0;
	}
	cout<<ans;
}