#include<bits/stdc++.h>
using namespace std;
#define int long long 
int Solve(vector<int>&arr, int n)
{
	int ans=0,sum=0;
	unordered_map<int, int> hash;
	for(int i=0; i<n; ++i)
	{
		sum+=arr[i];
		int rem=((sum%n) + n)%n;
		if(rem==0)
			ans++;
		if(hash.find(rem)==hash.end())
			hash[rem]++;
		else
		{
			ans+=hash[rem];
			hash[rem]++;
		}
	}
	return ans;
}
signed main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	cout<<Solve(arr,n);
}