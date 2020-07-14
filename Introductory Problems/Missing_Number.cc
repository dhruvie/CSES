#include<bits/stdc++.h>
using namespace std;
#define int long long
int Solve(vector<int>&nums, int n)
{
	int sum=0;
	for(int i=0; i<n-1; ++i)
		sum+=nums[i];
	int S=(n*(n+1))/2;
	return S-sum;

}
signed main()
{
	int n;
	cin>>n;
	vector<int> nums(n-1);
	for(int i=0; i<n-1; ++i)
		cin>>nums[i];
	cout<<Solve(nums,n);
}