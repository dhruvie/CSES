#include<bits/stdc++.h>
using namespace std;
#define int long long
int Solve(string str)
{
	int n=str.length(),ans=0,count=0;
	for(int i=0; i<n-1; ++i)
	{
		if(str[i]==str[i+1])
			count++;
		else
			count=0;
		ans=max(ans,count);
	}
	return ans+1;
}
signed main()
{
	string str;
	cin>>str;
	cout<<Solve(str);
	return 0;
}