#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll z;
    cin>>z;
    while(z--)
    {
        ll n,count=0;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if((arr[i]&arr[j])>=(arr[i]^arr[j]))
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}