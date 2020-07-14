#include<bits/stdc++.h>
using namespace std;
#define int long long
void Solve(int n ,int target)
{
	vector<int> set1,set2;
	int sum1=0,sum2=0;
	for(int i=n; i>0; --i)
	{
		if((i+sum1)<=target)
		{
			sum1+=i;
			set1.push_back(i);
		}
		else
		{
			sum2+=i;
			set2.push_back(i);
		}
	}
		cout<<"YES\n";
		int a=set1.size(),b=set2.size();
		cout<<a<<endl;
		for(int i=0; i<a; ++i)
			cout<<set1[i]<<" ";
		cout<<endl<<b<<endl;
		for(int i=0; i<b; ++i)
				cout<<set2[i]<<" ";
}
signed main()
{
	int n;
	cin>>n;
	int target=(n*(n+1))/2;
	if(target&1)
		cout<<"NO";
	else
	{
		target/=2;
		Solve(n,target);
	}
	
}