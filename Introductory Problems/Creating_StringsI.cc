#include<bits/stdc++.h>
using namespace std;
#define int long long
void Solve(vector<int>&arr, int n)
{
	vector<vector<int>>ans;
	ans.push_back(arr);
	bool fail=1;
	while(fail)
	{
		fail=0;
		for(int i=n-1; i>0; --i)
		{
			if(arr[i]<=arr[i-1])
				continue;
			else
			{
				fail=1;
				reverse(arr.begin()+i,arr.end());
				for(int j=i; j<n; ++j)
				{
					if(arr[i-1]<arr[j])
					{
						swap(arr[i-1],arr[j]);
						break;
					}
				}
			}
			ans.push_back(arr);
			break;
		}
	}
	int X=ans.size(),M=ans[0].size();
	cout<<X<<endl;
	for(int i=0; i<X; ++i)
	{
		for(int j=0; j<M; ++j)
			cout<<(char)(ans[i][j]+'a'-1);
		cout<<endl;
	}
}
signed main()
{
	string str;
	cin>>str;
	int n=str.length();
	vector<int>arr(n);
	for(int i=0; i<n; ++i)
		arr[i]=(str[i]-'a'+1);
	sort(arr.begin(),arr.end());
	Solve(arr,n);
}