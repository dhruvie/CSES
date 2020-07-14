#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int NoofWays(vector<vector<char>>&matrix,int n)
{
	vector<vector<int>>DP(n,vector<int>(n,0));
	for(int i=0; i<n; ++i)
	{
		if(matrix[i][0]=='*')
			break;
		DP[i][0]=1;
	}
	for(int i=0; i<n; ++i)
	{
		if(matrix[0][i]=='*')
			break;
		DP[0][i]=1;
	}
	for(int i=1; i<n; ++i)
	{
		for(int j=1; j<n; ++j)
		{
			if(matrix[i][j]=='*')
				matrix[i][j]=0;
			else
				DP[i][j]=(DP[i-1][j]%Mod + DP[i][j-1]%Mod)%Mod;
		}
	}
	return DP[n-1][n-1];
}
signed main()
{
	int n;
	cin>>n;
	vector<vector<char>> matrix(n,vector<char>(n,0));
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin>>matrix[i][j];
	cout<<NoofWays(matrix,n);
}