#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n,sum=0;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i], sum+=arr[i];
	sort(arr.begin(),arr.end());
	cout<<max(arr[n-1]*2,sum);
}