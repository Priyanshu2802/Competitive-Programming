#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z,a,l=0;
    cin>>z;
    while(z!=0)
    {
        a=z%10;
        z/=10;
        if(a==4 || a==7)
            l++;
    }
    ll c=0,flag=0;
    while(l!=0)
    {flag=1;
        c=l%10;
        l/=10;
        if(c!=4 && c!=7)
        {
        flag=0;
        break;
        }
    }
    if(flag==0)
    {
    cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
return 0;
}