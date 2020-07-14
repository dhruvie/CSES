#include<bits/stdc++.h>
using namespace std;
#define int long long 
int FindMin(vector<int> &arr,vector<int> &BlockMin,int Block_Size, int l, int r)
{
	int ans=INT_MAX;
	int start=l/Block_Size;
	int end=r/Block_Size;
	if(start==end)
	{
		for(int i=l; i<=r; ++i)
			ans=min(ans,arr[i]);
		return ans;
	}
	for(int i=l; i<((start+1)*Block_Size); ++i)
		ans=min(ans,arr[i]);
	for(int i=(end*Block_Size); i<=r; ++i)
		ans=min(ans,arr[i]);
	for(int i=start+1; i<end; ++i)
		ans=min(ans,BlockMin[i]);
	return ans;
}
void Update(vector<int>&arr,vector<int>&BlockMin,int Block_Size,int index, int value)
{
	BlockMin[index/Block_Size]=min(BlockMin[index/Block_Size],value);
	arr[index]=value;
}
signed main()
{
	int n,q;
	cin>>n>>q;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	int Block_Size=ceil(sqrt(n));
	vector<int> BlockMin(Block_Size,INT_MAX);
	for(int i=0; i<n; ++i)
		BlockMin[i/Block_Size]=min(arr[i],BlockMin[i/Block_Size]);
	for(int i=0; i<q; ++i)
	{
		int ch,x,y;
		cin>>ch>>x>>y;
		if(ch==2)
			cout<<FindMin(arr,BlockMin,Block_Size,x-1,y-1)<<endl;
		else
			Update(arr,BlockMin,Block_Size,x-1,y);
	}
}