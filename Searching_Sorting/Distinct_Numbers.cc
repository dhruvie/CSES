#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a,count=0;
	cin>>n;
	set<int> hash;
	for(int i=0; i<n; ++i)
	{
		cin>>a;
		if(hash.find(a)==hash.end())
		{
			count++;
			hash.insert(a);
		}
	}
	cout<<count;
}