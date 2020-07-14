#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n=8,obstacle=4;
	vector<vector<char>> chess(n, vector<char>(8,'.'));
	// for(int i=0; i<n; ++i)
	// {
	// 	for(int j=0; j<n; ++j)
	// 	{
	// 		cin>>chess[i][j];
	// 		if(chess[i][j]=='*')
	// 			obstacle++;
	// 	}
	// }
	int totalC=1,Attack=1;
	for(int i=0; i<8; ++i)
	{
		totalC*=((n*n)-i-obstacle);
	}
	totalC/=2;
	Attack*=((n*n)*21);
	for(int i=2; i<n; i+=2)
	{
		Attack*=(((n-i)*(n-i))*21 + i);
	}
	// Attack/=2;
	cout<<totalC-Attack;
}