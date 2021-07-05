#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;;
    cin>>n;
    ll s[n];
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    ll l,m;
    if(n%2!=0)
        l=n/2;
    else 
        l=n/2-1;
    cout<<l<<endl;
    ll i=0;
    ll j=l;
    if(n%2!=0)
    {
    for(ll z=0;z<n;z++)
    {
        if(z%2==0)
        {
            cout<<s[j]<<" ";
            j++;
        }
        else 
        {
            cout<<s[i]<<" ";
            i++;
        }
    }
    }
    else 
    {
    for(ll z=0;z<n-1;z++)
    {
        if(z%2==0)
        {
            cout<<s[j]<<" ";
            j++;
        }
        else 
        {
            cout<<s[i]<<" ";
            i++;
        }
    }
    cout<<s[n-1]<<endl;
    }
return 0;
}