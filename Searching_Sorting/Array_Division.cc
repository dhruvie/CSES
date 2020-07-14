#include<bits/stdc++.h>
using namespace std;
#define int long long 
int Solve(vector<int>&arr, int n, int k)
{
	int equalsum,sum=0,ans=0;
	for(int i=0; i<n; ++i)
		sum+=arr[i];
	equalsum=sum/k;
	sum=0;
	k--;
	for(int i=0; i<n; ++i)
	{
		if((sum+arr[i])>equalsum && k)
		{
			sum=0;
			k--;
		}
		sum+=arr[i];
		ans=max(sum,ans);
	}
	return ans;
}
signed main()
{
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	cout<<Solve(arr,n,k);
}