#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll z;
    cin>>z;
    while(z--)
    {
        ll n,i;
        cin>>n;
        ll brr[n];
        ll arr[200000]={0};
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
            arr[brr[i]]++;
        }
        if(n>1)
        {
        ll min=0,ans=0,count=0,h=0;
        for(i=0;i<200000;i++)
        {
            if(arr[i]>0)
            {
                h=i;
                break;
            }
        }
        min=arr[h],ans=h;
        for(i=1;i<=200000;i++)
        {
            if(arr[i]<min && arr[i]!=0)
            {
                min=arr[i];
                ans=i;
            }
        }
        for(i=0;i<n;i++)
        {
            if(brr[i]==brr[ans])
            count++;
        }
        ll s;
        for(i=0;i<n;i++)
        {
            if(brr[i]==ans)
            {
            s=i+1;
            break;
            }
        }
        if(count>1)
        {
        cout<<"-1"<<endl;
        }
        else
        cout<<s<<endl;
        }   
        else
        cout<<"1"<<endl;
             
    }
return 0;
}