#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int prime(ll);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    bool flag=true;
    cin>>n>>m;
    ll a=prime(n);
    ll b=prime(m);
    if(a==1 && b==1)
    {
        n++;
        while(n<=m)
        {
            if(prime(n)==1 && n!=m)
            {
                flag=0;
                break;
            }
            n++;
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    else if(b!=1 ||a!=1)
    {
        cout<<"NO"<<endl;
    }

return 0;
}
int prime(ll n)
{ 
    bool flag=true;
    if(n==3)
    return flag;
    else
    {
    ll i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
        i++;
    }
    }
return flag;
}