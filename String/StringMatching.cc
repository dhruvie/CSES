#include<bits/stdc++.h>
using namespace std;
void LPSTable(string pattern, vector<int> &Table, int l)
{
	int i=1,index=0;
	Table[0]=0;
	while(i<l)
	{
		if(pattern[i]==pattern[index])
		{
			index++;
			Table[i]=index;
			i++;
		}
		else if(index>0)
			index=Table[index-1];
		else
		{
			Table[i]=index;
			i++; 
		}
	}

}
int KMP(string str, string pattern)
{
	int l=pattern.length(),n=str.length(),ans=0;
	vector<int> Table(l,0);
	LPSTable(pattern,Table,l);
	while(i<n && j<m)
	{
		if(str[i]==pattern[j])
		{
			i++;
			j++;
		}
		else
		{
			if(j==0)
				i++;
			else
				j=pattern[j-1];
		}
		if(j==m-1)
		{
			ans++;
			j=pattern[j-1];
		}
	}
	return false;
	return ans;
}
int main()
{
	string str,pattern;
	cin>>str>>pattern;
	cout<<KMP(str,pattern);
}