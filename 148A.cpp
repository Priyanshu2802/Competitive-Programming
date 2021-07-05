#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll k,l,m,n,d,i,count=0;
    cin>>k>>l>>m>>n>>d;
    for(i=1;i<=d;i++)
    {
        if(i%k==0)
        count++;
        if(i%k!=0 && i%l==0)
        count++;
        if(i%m==0 && i%k!=0 && i%l!=0 )
        count++;
        if(i%n==0 && i%m!=0 && i%k!=0 && i%l!=0)
        count++;
    }
    cout<<count<<endl;
return 0;
}