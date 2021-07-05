#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll z;
    cin>>z;
    while(z--)
    {
        ll n,count=1,pro=1;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        if(arr[0]>0)
        {
            for(ll i=n-1;count<6;i--)
            {
                count++;
                pro=pro*arr[i];
            }
            cout<<pro<<endl;
        }
    }
}