#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,l,r,i;
    cin>>n;
    ll lc=0,lo=0,ro=0,rc=0;
    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l==0)
        lc++;
        else
        {
            lo++;
        }
        if(r==0)
        rc++;
        else
        {
            ro++;
        }
    }
        ll count=0;
        if(lc>=lo)
        count+=lo;
        else
        {
            count+=lc;
        }
        if(rc>=ro)
        count+=ro;
        else
        {
            count+=rc;
        }
        cout<<count<<endl;
return 0;
}