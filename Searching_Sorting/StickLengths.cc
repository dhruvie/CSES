#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	int median=arr[n/2],cost=0;
	for(int i=0; i<n; ++i)
		cost+=abs(median-arr[i]);
	cout<<cost;
}