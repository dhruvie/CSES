#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
	int n;
	cin>>n;
	vector<int> cubes(n);
	for(int i=0; i<n; ++i)
		cin>>cubes[i];
	int count=0,max_seen=0;
	for(int i=0; i<n; ++i)
	{
		if(cubes[i]>=max_seen)
		{
			max_seen=cubes[i];
			count++;
		}
	}
	cout<<count;
}