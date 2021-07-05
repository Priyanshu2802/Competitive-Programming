#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,i;
    cin>>n;
    ll x=0,y=0,z=0,a,b,c;
    for(i=0;i<n;i++)
    {
        cin>>a;
        x+=a;
        cin>>b;
        y+=b;
        cin>>c;
        z+=c;
    }
    if(x==0 && y==0 &&z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
return 0;
}