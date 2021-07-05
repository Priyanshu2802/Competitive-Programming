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
    ll arr[z],i,max=0,min=101,a=0,b=0;
    for(i=0;i<z;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        a=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            b=i;
        }
    }
    ll count=0;
    if(a>b)
    {
        count=a+(z-1-b)-1;
        cout<<count<<endl;
    }
    else
    {
        count=a+(z-1-b);
        cout<<count<<endl;
    }
    
return 0;
}