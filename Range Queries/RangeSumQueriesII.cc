#include<bits/stdc++.h>
using namespace std;
#define int long long 
int FindSum(vector<int> &arr,vector<int> &BlockSum,int Block_Size, int l, int r)
{
	int sum=0;
	int start_Block=l/Block_Size;
	int end_Block=r/Block_Size;
	if(start_Block==end_Block)
	{
		for(int i=l; i<=r; ++i)
			sum+=arr[i];
		return sum;
	}
	for(int i=l; i<(start_Block+1)*Block_Size; ++i)
		sum+=arr[i];
	for(int i=(end_Block)*Block_Size; i<=r; ++i)
		sum+=arr[i];
	for(int i=start_Block+1; i<end_Block; ++i)
		sum+=BlockSum[i];
	return sum;
}
void Update(vector<int> &arr,vector<int> &BlockSum,int Block_Size, int index, int new_value)
{
	int old_value=arr[index];
	BlockSum[index/Block_Size]+=(new_value-old_value);
	arr[index]=new_value;
}
signed main()
{
	int n,q;
	cin>>n>>q;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	int Block_Size=ceil(sqrt(n));
	vector<int>BlockSum(Block_Size);
	for(int i=0; i<n; ++i)
		BlockSum[i/Block_Size]+=arr[i];
	for(int i=0; i<q; ++i)
	{
		int ch,x,y;
		cin>>ch>>x>>y;
		if(ch==2)
			cout<<FindSum(arr,BlockSum,Block_Size,x-1,y-1)<<endl;
		else
			Update(arr,BlockSum,Block_Size,x-1,y);
	}
}