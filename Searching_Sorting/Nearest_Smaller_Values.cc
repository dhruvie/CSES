#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; ++i)
		cin>>nums[i];
	vector<int> ans(n,0);
	stack<int> s;
	for(int i=n-1; i>=0; --i)
	{
		while(!s.empty() && nums[s.top()]>nums[i])
		{
			ans[s.top()]=i+1;
			s.pop();
		}
		s.push(i);
	}
	for(int i=0; i<n; ++i)
		cout<<ans[i]<<" ";
}