#include<bits/stdc++.h>
using namespace std;
#define int long long 
int Solve(vector<int>&arrival,vector<int>&exit, int n)
{
	sort(arrival.begin(),arrival.end());
	sort(exit.begin(),exit.end());
	int count=0,ans=0,i=0,j=0;
	while(i<n)
	{
		if(arrival[i]<=exit[j])
		{
			count++;
			i++;
		}
		else
		{
			count--;
			j++;
		}
		ans=max(count,ans);
	}
	return ans;
}
signed main()
{
	int n;
	cin>>n;
	vector<int> arrival(n),exit(n);
	for(int i=0; i<n; ++i)
		cin>>arrival[i]>>exit[i];
	cout<<Solve(arrival,exit,n);
}