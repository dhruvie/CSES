#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
void MoneySum(vector<int>&arr, int n , int target)
{
	bool DP[n+1][target+1];
	for(int i=0; i<=n;  ++i)
	{
		for(int j=0; j<=target; ++j)
		{
			if(j==0)
				DP[i][j]=true;
			else if(i==0)
				DP[i][j]=false;
			else if(j<arr[i-1])
				DP[i][j]=DP[i-1][j];
			else
				DP[i][j]=DP[i-1][j-arr[i-1]] | DP[i-1][j];
		}
	}
	vector<int> ans;
	for(int i=1; i<=target; ++i)
		if(DP[n][i])
			ans.push_back(i);
	int X=ans.size();
	cout<<X<<endl;
	for(int i=0; i<X; ++i)
		cout<<ans[i]<<" ";
}
signed main()
{
	int n,target=0;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
		target+=arr[i];
	}
	MoneySum(arr,n,target);
}