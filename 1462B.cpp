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
        string s;
        ll n;
        cin>>n;
        cin>>s;
        ll i,flag=1,count=0;
        ll a[4]={-1};
        ll d[3]={0};
        n=s.size();
        string str="2020";
        ll found=s.find(str);
        if(found != string::npos)
        {
            if(found==0 || found+4==(n-1))
            flag=1;
        }
        else
        {
            for(i=0;i<n;i++)
        {
            if(s[i]=='2')
            {
                a[0]=i;
                break;
            }
        }
        for(;i<n;i++)
        {
             if(s[i]=='0')
            {
                a[1]=i;
                break;
            }
        }
         for(;i<n;i++)
        {
             if(s[i]=='2')
            {
                a[2]=i;
                break;
            }
        }
         for(;i<n;i++)
        {
             if(s[i]=='0')
            {
                a[3]=i;
                break;
            }
        }
        for(i=0;i<4;i++)
        {
            if(a[i]==-1)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            for(i=0;i<3;i++)
            d[i]=a[i+1]-a[i];
        }
        for(i=0;i<3;i++)
        {
            if(d[i]>1)
            count++;
        }
        ll space=a[0]-0;
        ll w=n-a[3];
        if(count==0 && (space ==0 ||w==0))
        flag=1;
        else if(count==1 && (space ==0 && w==0) )
        flag=1;
        else if(count==0 && (space>0 && w==0))
        flag=1;
        else if(count==0 && (w>0 && space==0))
        flag=1;
        else
        {
            flag=0;
        }
        }
        if(count>1 ||flag==0)
        {
        cout<<"NO"<<endl;
        }
        else if(flag==1 )
        {
            cout<<"YES"<<endl;
        }
        
    }
return 0;
}