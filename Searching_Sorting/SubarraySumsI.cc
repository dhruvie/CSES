#include<bits/stdc++.h>
using namespace std;
#define int long long
int Solve(vector<int>&arr, int n, int x)
{
	int count=0,begin=0,end=0,sum=0;
	// 1. Using Prefix array sum 

	// unordered_map<int,int> hash;
	// while(end<n)
	// {
	// 	sum+=arr[end];
	// 	hash[sum]++;
	// 	if(sum==x || hash.find(sum-x)!=hash.end())
	// 		count++;
	// 	end++;
	// }

	// 2. using sliding window technique
	while(end<n)
	{
		sum+=arr[end];
		while(begin<=end && sum>=x)
		{
			if(sum==x)
				count++;
			sum-=arr[begin++];
		}
		end++;
	}
	return count;
}
signed main()
{
	int n,x;
	cin>>n>>x;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	cout<<Solve(arr,n,x);
}