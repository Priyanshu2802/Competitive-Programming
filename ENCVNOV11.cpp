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
        ll n,i,count=0;
        cin>>n;
        ll arr[n+1];
        for(i=0;i<=n;i++)
        {
        arr[i]=1;
        }
        for(i=2;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
            {
                if(arr[j]==0)
                arr[j]=1;
                else
                arr[j]=0;                
            }
        }
        for(i=1;i<=n;i++)
        {
            if(arr[i]==1 && i%3!=0)
            count++;
        }
        cout<<count<<endl;
    }
return 0;
}