#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 1000000007
int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	int res=1;
	for(int i=2; i<=n; ++i)
		res=((res%Mod) * (i%Mod))%Mod;
	return res;
}
signed main()
{
	string str;
	cin>>str;
	int n=str.length();
	vector<int> hash(26,0);
	for(int i=0; i<n; ++i)
		hash[str[i]-'a']++;
	int totalC=fact(n);
	for(int i=0; i<26; ++i)
		totalC/=fact(hash[i]);
	cout<<totalC;
}