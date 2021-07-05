#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n; 
void solve()
{
	cin>>n;
 
	cout<<((n+2)/2)*((n+3)/2)*(1+(n&1))<<endl;
 
}
main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t=1;
	//cin>>t;
 
	for(ll tc=1;tc<=t;++tc)
	{
		solve();
	}
}