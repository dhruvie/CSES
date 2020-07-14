#include<bits/stdc++.h>
using namespace std;
#define int long long
//Recursively

// void Subsequences(vector<int> &nums,int i, int n, vector<int> temp)
// {
// 	if(i==n)
// 	{
// 		int x=temp.size();
// 		for(int i=0; i<x; ++i)
// 			cout<<temp[i]<<" ";
// 		cout<<endl;
// 		return ;
// 	}
// 	temp.push_back(nums[i]);
// 	Subsequences(nums,i+1,n,temp);
// 	temp.pop_back();
// 	Subsequences(nums,i+1,n,temp);
// }

// Iterative
void Subsequences(vector<int>&arr,int i, int n)
{
	int N=1<<n;
	for(i=0; i<N; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			if(i&(1<<j))
				cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
}
signed main()
{
	int n,Range=0;
	cin>>n;
	vector<int> nums(n),temp;
	for(int i=0; i<n; ++i)
		cin>>nums[i];
	// Subsequences(nums,0,n,temp);
	Subsequences(nums,0,n);
}