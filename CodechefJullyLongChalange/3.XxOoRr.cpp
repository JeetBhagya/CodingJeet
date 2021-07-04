#include<bits/stdc++.h>
using namespace std;

vector<int> decToBinary(int n)
{
	vector<int>ans;
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) ans.push_back(1);
        else ans.push_back(0);
    }
    return ans;
}
void solve()
{
	int n, k; cin>>n>>k; 
	vector<int>pr;
	vector<vector<int>>vs;
	for(int i=0; i<n; i++)
	{
		int m; cin>>m;
		auto ans=decToBinary(m);
		vs.push_back(ans);
	}
	for(int j=0; j<32; j++)
	{
		int sum=0;
		for(int i=0; i<n; i++)
			sum+=vs[i][j];
		pr.push_back(sum);
	}
	int res=0;
	for(int i=0; i<pr.size(); i++) 
		res=res+ceil(pr[i]/float(k));
	cout<<res<<endl;
}	

int main()
{
	int t; cin>>t;
	while(t--)
	{
		solve();
	}

}