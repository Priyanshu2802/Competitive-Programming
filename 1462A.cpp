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
        ll n,i,count=0;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        for(i=0;count<n;i++)
        {
            if(count<n)
            {
            cout<<arr[i]<<" ";
            count++;
            }
            if(count<n)
            {
            cout<<arr[n-1-i]<<" ";
            count++;
            }
        }
        cout<<endl;
    }
return 0;
}