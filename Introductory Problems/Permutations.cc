#include<bits/stdc++.h>
using namespace std;
#define int long long
void Solve(int n)
{
	for(int i=2; i<=n; i+=2)
		cout<<i<<" ";
	for(int i=1; i<=n; i+=2)
		cout<<i<<" ";
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	if(n==1)
		cout<<1;
	if(n<=3)
		cout<<"NO SOLUTION";
	else
		Solve(n);
	return 0;
}