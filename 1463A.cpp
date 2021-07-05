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
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum=a+b+c;
        ll d=sum/9;
        if(sum==(d*3+d*6) && a>=d && b>=d && c>=d)
        {
        cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
return 0;
}