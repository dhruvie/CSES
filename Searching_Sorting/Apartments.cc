#include<bits/stdc++.h>
using namespace std;
#define int long long
int Solve(vector<int>&arr,int n,vector<int>&X,int m, int k)
{
	int ans=0,i=0,j=0;
	while(i<n && j<m)
	{
		int lower_range=arr[i]-k,upper_range=arr[i]+k;
		if(X[j]>=lower_range && X[j]<=upper_range)
		{
			ans++;
			i++;
			j++;
		}
		else if(X[j]<lower_range)
			j++;
		else if(X[j]>upper_range)
			i++;
	}
	return ans;
}
signed main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	vector<int> X(m);
	for(int i=0; i<m; ++i)
		cin>>X[i];
	sort(X.begin(),X.end());
	cout<<Solve(arr,n,X,m,k);
}