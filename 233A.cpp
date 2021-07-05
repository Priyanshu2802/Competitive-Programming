#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin>>z;
    if(z%2==1)
    {
    cout<<"-1"<<endl;
    }
    else
    {
    
    for(ll i=1;i<=z;i++)
    {
    cout<<i+1<<" ";
    cout<<i<<" ";
    i++;
    }
    }
    
   
return 0;
}