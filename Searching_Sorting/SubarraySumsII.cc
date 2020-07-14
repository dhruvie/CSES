#include<bits/stdc++.h>
using namespace std;
#define int long long
int Solve(vector<int>&arr, int n, int x)
{
	int count=0,sum=0;
	map< int, int> hash;
    for(int i=0; i<n; ++i)
    {
    	sum+=arr[i];
        if(sum==x)
            count++;
        int val=sum-x;
        count+=hash[val];
        hash[sum]++;        
	}
	return count;
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	cout<<Solve(arr,n,x);
}