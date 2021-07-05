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
        ll n,d,i,flag=0;
        cin>>n;
        vector<ll>v;
        if(n>=46)
        {
        cout<<"-1"<<endl;
        }
        else if(n==45)
        {
            cout<<123456789<<endl;
        }
        else if(n==44)
        {
            cout<<23456789<<endl;
        }
        else 
        {
            for(i=9;i>0;i--)
            {
                n=n-i;
                if(n>0)
                {
                    v.push_back(i);
                }
                else if(n==0)
                {
                    v.push_back(i);
                    break;
                }
                else if(n<0)
                {
                    d=n+i;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
            v.push_back(d);
            }
            for(i=v.size()-1;i>=0;i--)
            cout<<v[i];
            cout<<endl;
            }
        }
        
return 0;
}
