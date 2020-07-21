#include<bits/stdc++.h>
using namespace std;
#define int long long 
int Check(vector<int>&arr,int n, int max_sum)
{
	int noOfSubarray=1,sum=0;
	for(int i=0; i<n; ++i)
	{
		if((sum+arr[i])<=max_sum)
			sum+=arr[i];
		else
		{
			sum=arr[i];
			noOfSubarray++;
		}
	}
	return noOfSubarray;
}
int Solve(vector<int>&arr, int n, int k)
{
	int lb=INT_MIN,ub=0,ans=0;
	for(int i=0; i<n; ++i)
	{
		lb=max(arr[i],lb);
		ub+=arr[i];
	}
	while(lb<=ub)
	{
		int mid=lb-(lb-ub)/2;
		int res=Check(arr,n,mid);
		if(res<=k)
		{
			ans=mid;
			ub=mid-1;
		}else
			lb=mid+1;
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