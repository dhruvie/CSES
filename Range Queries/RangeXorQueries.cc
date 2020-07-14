#include<bits/stdc++.h>
using namespace std;
#define int long long 
int FindXor(vector<int> &arr,vector<int> &BlockXor,int Block_Size, int l, int r)
{
	int ans=0;
	int start=l/Block_Size;
	int end=r/Block_Size;
	if(start==end)
	{
		for(int i=l; i<=r; ++i)
			ans^=arr[i];
		return ans;
	}
	for(int i=l; i<((start+1)*Block_Size); ++i)
		ans^=arr[i];
	for(int i=(end*Block_Size); i<=r; ++i)
		ans^=arr[i];
	for(int i=start+1; i<end; ++i)
		ans^=BlockXor[i];
	return ans;
}
signed main()
{
	int n,q;
	cin>>n>>q;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	int Block_Size=ceil(sqrt(n));
	vector<int> BlockXor(Block_Size,0);
	for(int i=0; i<n; ++i)
		BlockXor[i/Block_Size]^=arr[i];
	for(int i=0; i<q; ++i)
	{
		int x,y;
		cin>>x>>y;
		cout<<FindXor(arr,BlockXor,Block_Size,x-1,y-1)<<endl;
	}
}