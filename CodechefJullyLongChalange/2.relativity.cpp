#include<bits/stdc++.h>
using namespace std;

int solve(int g, int c)
{
	int h=(c*c)/(2*g);
	return h;
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int g, c; cin>>g>>c;
		cout<<solve(g, c)<<endl;
	}
	return 0;
}