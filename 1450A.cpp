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
        ll n,i,arr[6],pos=-1;
        string a;
        cin>>n;
        char s[n];
        cin>>a;
        for(i=0;i<n;i++)
        s[i]=a[i];
        for(i=0;i<n;i++)
        {
        if(s[i]=='t')
            arr[0]=i;
        }
        for(i=0;i<n;i++)
        {
        if(s[i]=='r')
            arr[1]=i;
        }
        for(i=0;i<n;i++)
        {
        if(s[i]=='y')
            arr[2]=i;
        }
        for(i=0;i<n;i++)
        {
        if(s[i]=='g')
            arr[3]=i;
        }
        for(i=0;i<n;i++)
        {
        if(s[i]=='u')
            arr[4]=i;
        }
        for(i=0;i<n;i++)
        {
        if(s[i]=='b')
            arr[5]=i;
        }
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            pos=i;
            break;
        }
        if(pos==-1)
        {
        for(i=n-1;i>=0;i--)
        {
            cout<<s[i];
        }
            cout<<endl;
        }
        else 
        {
            for(i=0;i<n;i++)
            cout<<s[i];
            cout<<endl;
        }
    }
return 0;
}