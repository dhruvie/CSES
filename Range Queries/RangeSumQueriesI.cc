#include<bits/stdc++.h>
using namespace std;
#define int long long 
int FindSum(vector<int> &arr,vector<int> &BlockSum,int Block_Size, int l, int r)
{
	int sum=0;
	int start=l/Block_Size;
	int end=r/Block_Size;
	if(start==end)
	{
		for(int i=l; i<=r; ++i)
			sum+=arr[i];
		return sum;
	}
	for(int i=l; i<((start+1)*Block_Size); ++i)
		sum+=arr[i];
	for(int i=(end*Block_Size); i<=r; ++i)
		sum+=arr[i];
	for(int i=start+1; i<end; ++i)
		sum+=BlockSum[i];
	return sum;
}
signed main()
{
	int n,q;
	cin>>n>>q;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	int Block_Size=ceil(sqrt(n));
	vector<int> BlockSum(Block_Size);
	for(int i=0; i<n; ++i)
		BlockSum[i/Block_Size]+=arr[i];
	for(int i=0; i<q; ++i)
	{
		int x,y;
		cin>>x>>y;
		cout<<FindSum(arr,BlockSum,Block_Size,x-1,y-1)<<endl;
	}
}