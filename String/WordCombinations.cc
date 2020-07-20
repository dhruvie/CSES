#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
unordered_map<string,int> memo;
int Knapsack(string str, int n,int i, vector<string> & arr,string ans)
{
	if(str==ans)
		return 1;
	else if(i>=n || str.length()<ans.length())
		return 0;
	string key=ans+'|'+to_string(i);
	if(memo.find(key)!=memo.end())
		return memo[key];
	int x=Knapsack(str,n,i,arr,ans+arr[i]);
	int y=Knapsack(str,n,i+1,arr,ans);
	return memo[key]=((x%Mod) + (y%Mod))%Mod;
}
signed main()
{
	string str;
	cin>>str;
	int n,l;
	l=str.length();
	cin>>n;
	cin.ignore();
	vector<string> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	cout<<Knapsack(str,n,0,arr,"");
}