#include<bits/stdc++.h>
using namespace std;
#define int long long 
int Solve(vector<int>&songs,int n)
{
	map<int,int> hash;
	int begin=0,end=0,ans=0;
	while(end<n)
	{
		if(hash.find(songs[end])==hash.end())
			hash[songs[end]]=end;
		else if(hash[songs[end]]<begin)
			hash[songs[end]]=end;
		else
		{
			begin=hash[songs[end]]+1;
			hash[songs[end]]=end;
		}
		ans=max(end-begin+1,ans);
		end++;
	}
	return ans;
}
signed main()
{
	int n;
	cin>>n;
	vector<int>songs(n);
	for(int i=0; i<n; ++i)
		cin>>songs[i];
	cout<<Solve(songs,n);
}