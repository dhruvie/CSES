							// ____________________________________________
							// |_1_|_2_|_3__|_3__|__3__|__3___|__2__|__1__|
							// |_2_|_4_|_5__|_5__|__5__|__5___|__4__|__2__|
							// |_3_|_5_|_6__|_6__|__6__|__6___|__5__|__3__|
							// |_3_|_5_|_6__|_6__|__6__|__6___|__5__|__3__|
							// |_3_|_5_|_6__|_6__|__6__|__6___|__5__|__3__|
							// |_3_|_5_|_6__|_6__|__6__|__6___|__5__|__3__|
							// |_2_|_4_|_5__|_5__|__5__|__5___|__4__|__2__|
							// |_1_|_2_|_3__|_3__|__3__|__3___|__2__|__1__|




#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; ++i)
	{
		int total=(i*i)*((i*i)-1);				       // Total Number of ways to place Two knights on a chessboard. For placing one knight in a (n*n)
									  // we have (n*n) choices. for second knight we have (n*n)-1., because 1 positin is already occupied.
		int k_1=4*2;				// No 1 in the matrix is my corner and there are four corners.
		int k_2=8*3;
		int k_3=(i-4)*4*4;
		int k_4=4*4;
		int k_5=(i-4)*6*4;
		int k_6=(i-4)*(i-4)*8;
		int ans=(total-(k_1 + k_2 + k_3 + k_4 + k_5 + k_6))/2;
		cout<<ans<<endl;
	}
}