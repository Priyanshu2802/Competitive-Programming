#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll z;
    cin>>z;
    while(z--)
    {
        ll arr[3],i,sum=0;
        for(i=0;i<3;i++)
        {
        cin>>arr[i];
        sum+=arr[i];
        }
        cout<<sum-1<<endl;
    }
return 0;
}