#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ll z;
    cin>>z;
    while(z--)
    {
        ll n,i,min=0,max=0;
        cin>>n;
        ll arr[n],brr[n];
        for(i=0;i<n;i++)
        {
        cin>>arr[i];
        brr[i]=arr[i];
        }
        sort(brr,brr+n);
        for(i=0;i<n;i++)
        {
            if(arr[i]!=brr[i])
            {
            min=i;
            break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]!=brr[i])
            {
            max=i;
            break;
            }
        }
        int count=max-min;
        if(count>0)
        {
            count++;
            cout<<count<<endl;
        }
        else
        cout<<count<<endl;
    }
return 0;
}