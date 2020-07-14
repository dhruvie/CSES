#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n,a,b,sum=0,ans=INT_MIN,begin=0;
	cin>>n>>a>>b;
	vector<int> nums(n);
	for(int i=0; i<n; ++i)
		cin>>nums[i];
	for(int i=0; i<n; ++i)
	{
		sum+=nums[i];
		if((i-begin+1)>=a && (i-begin+1)<=b)
				ans=max(sum,ans);
		while(begin<=i && sum<0)
		{
			if((i-begin+1)>=a && (i-begin+1)<=b)
				ans=max(sum,ans);
			sum-=arr[begin];
			begin++;
		}
	}
	cout<<ans;
}