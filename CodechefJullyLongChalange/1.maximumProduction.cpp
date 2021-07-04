#include<bits/stdc++.h>
using namespace std;

int solve(int d, int x, int y, int z)
{
	int fCase=7*x;
	int sCase=d*y + (7-d)*z;
	return max(fCase, sCase);
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int d, x, y, z;
		cin>>d>>x>>y>>z;
		cout<<solve(d, x, y, z)<<endl;	
	}	
	return 0;
}