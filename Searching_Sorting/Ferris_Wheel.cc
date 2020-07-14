#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n,x,ans=0;
	cin>>n>>x;
	vector<int> nums(n);
	for(int i=0; i<n; ++i)
		cin>>nums[i];
	sort(nums.begin(),nums.end());
	int i=0,j=n-1;
	while(i<=j){
		if((nums[i]+nums[j])>x)
			j--;
		else
		{
			i++;
			j--;
		}
		ans++;
	}
	cout<<ans;
}