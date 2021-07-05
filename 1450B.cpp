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
        ll n,k,i,j,flag=0;
        cin>>n>>k;
        ll arr[n][2];
        for(i=0;i<n;i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(((abs(arr[i][0]-arr[j][0]))+(abs(arr[i][1]-arr[j][1])))>k)
                {
                    flag=1;
                }
            }
            if(flag==0)
                break;  
        }
        if(flag==0)
        {
        cout<<"1"<<endl;
        }
        else if(flag==1)
        cout<<"-1"<<endl;
    }
return 0;
}