#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll z;
    cin>>z;
    while(z--)
    {
        ll n,m,arr[2][2];
        cin>>n>>m;
        for(ll i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];
        if(m%2!=0)
        cout<<"NO"<<endl;
        else if(m%2==0 && m==2)
        {
            if(arr[0][1]!=arr[1][0])
            cout<<"NO"<<endl;
            else 
            cout<<"YES"<<endl;
        }
        else if(m%2==0 && m!=2)
        {
            cout<<"YES"<<endl;
        }
    }
return 0;
}