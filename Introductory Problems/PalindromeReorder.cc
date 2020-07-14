#include<bits/stdc++.h>
using namespace std;
void isPalindrome(string str, int hash[],int n)
{
	bool oddfreq=0;
	string half="",odd="",ans="";
	for(int i=0; i<n; ++i)
		hash[str[i]-'A']++;
	for(int i=0; i<26; ++i)
	{
		if(!(hash[i]&1))
		{
			int X=hash[i]/2;
			for(int j=0; j<X; ++j)
				half+=(char)('A'+i);
		}
		else if(oddfreq==0)
		{
			oddfreq=1;
			int X=(hash[i]-1)/2;
			odd=(char)'A'+i;
			for(int j=0; j<X; ++j)
				half+=(char)'A'+i;

		}else
		{
			cout<<"NO SOLUTION";
			return;
		}
	}
	ans=half+odd;
	reverse(half.begin(),half.end());
	ans+=half;
	cout<<ans;
}
signed main()
{
	string str;
	cin>>str;
	int hash[26],n=str.length();
	memset(hash,0,sizeof(hash));
	isPalindrome(str,hash,n);
}