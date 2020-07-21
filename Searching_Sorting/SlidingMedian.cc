#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	for(int i=0; i<=n-k; ++i)
	{
		vector<int> temp(k);
		int x=0;
		for(int j=i; j<i+k; ++j)
			temp[x++]=arr[j];
		sort(temp.begin(),temp.end());
		if(k&1)
			cout<<temp[k/2]<<" ";
		else
			cout<<min(temp[k/2],temp[(k/2)-1])<<" ";
	}
}		