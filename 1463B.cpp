
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
    while(z--)
    {
        ll n,i,flag=0,p;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        ll odd=0;
        ll even=0;
        for(i=0;i<n;i+2)
        {
            even+=arr[i];
        }
        for(i=1;i<n;i+2)
        {
            odd+=arr[i];
        }
        ll brr[n];
        if(odd>=even)
        {
            for(i=0;i<n;i+2)
            brr[i]=1;
            for(i=1;i<n;i+2)
            brr[i]=arr[i];
        }
        else if(even>odd)
        {
            for(i=1;i<n;i+2)
            brr[i]=1;
            for(i=0;i<n;i+2)
            brr[i]=arr[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<brr[i]<<" ";
        }
        cout<<endl;
        
       
    }
return 0;
}